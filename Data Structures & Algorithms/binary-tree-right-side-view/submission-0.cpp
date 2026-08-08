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
    vector<int> view(TreeNode* root, vector<int> &res,int level){
        if(root == nullptr) return res;

        if(level == res.size() ) res.push_back(root->val);

        view(root->right,res,level + 1);
        view(root->left,res,level + 1);

        return res;
    }
    vector<int> rightSideView(TreeNode* root){
        vector<int>res;
        return view(root,res,0);
        // return res;  
    }
};
