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
    bool helpFunc(TreeNode* node, int val, int target) {
        if (node == nullptr) return false;
        if (val + node->val == target && node->right == nullptr && node->left == nullptr) return true;
        return helpFunc(node->right, val + node->val, target) | helpFunc(node->left, val + node->val, target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helpFunc(root, 0, targetSum);
    }
};