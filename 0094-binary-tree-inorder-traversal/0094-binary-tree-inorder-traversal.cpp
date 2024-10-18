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
    void helper(vector<int>& ans, TreeNode* cur_root) {
        if (cur_root == nullptr) return;
        helper(ans, cur_root->left);
        ans.push_back(cur_root->val);
        helper(ans, cur_root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) { 
        vector<int> ans;
        helper(ans, root);
        return ans;
    }
};