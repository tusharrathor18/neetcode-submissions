/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    pair<int,int> diameterHeight(TreeNode* root){
        if(root == nullptr) return {0,0};

        auto left = diameterHeight(root->left);
        auto right = diameterHeight(root->right);

        int diameter = max({left.first,right.first,left.second + right.second });
        int height = 1 + max(left.second,right.second);

        return {diameter,height};
    }
    int diameterOfBinaryTree(TreeNode* root) {

        return diameterHeight(root).first;
        
    }
};
