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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> rs;

        if (root == nullptr) return rs;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();
            vector<int> ans;

            for (int i = 0; i < n; i++) {

                TreeNode* f = q.front();
                q.pop();

                ans.push_back(f->val);

                if (f->left) q.push(f->left);

                if (f->right) q.push(f->right);
            }

            rs.push_back(ans);
        }

        return rs;
    }
};
