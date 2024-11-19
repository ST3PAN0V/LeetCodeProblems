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
    int solve(TreeNode* node) {
        if (!node) return 0;
        int l = solve(node->left);
        int r = solve(node->right);
        if (abs(r-l) > 1 || l == -1 || r == -1) return -1;
        return 1 + max(l, r);
    }

    bool isBalanced(TreeNode* root) {
        return solve(root) == -1 ? false : true;
    }
};