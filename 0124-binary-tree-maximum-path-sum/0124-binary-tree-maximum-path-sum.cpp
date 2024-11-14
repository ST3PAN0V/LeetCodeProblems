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
    int findSum(TreeNode* node, int& ans) {
        if (node == nullptr) return -1001;
        int right = findSum(node->right, ans);
        int left = findSum(node->left, ans);
        ans = max(ans, node->val + max(left, 0) + max(right, 0));
        return max(right, max(left,0)) + node->val;

    }
    int maxPathSum(TreeNode* root) {
        int ans = -1001;
        findSum(root, ans);
        return ans;

    }
};