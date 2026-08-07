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
private:
    pair<bool,int> isBalancedHeight(TreeNode* root){
        if(root == nullptr) return {true,0};

        auto left = isBalancedHeight(root->left);
        auto right = isBalancedHeight(root->right);

        bool isbalanced = left.first and right.first 
                            and abs(left.second - right.second) <=1;

        int height = 1 + max(left.second , right.second);

        return {isbalanced,height};

        
    }
public:
    bool isBalanced(TreeNode* root) {

        return isBalancedHeight(root).first;
        
    }
};
