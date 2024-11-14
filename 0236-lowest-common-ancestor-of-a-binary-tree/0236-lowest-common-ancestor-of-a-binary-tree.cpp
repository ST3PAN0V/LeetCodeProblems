/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* node, TreeNode* p, TreeNode* q) {
        if (node == nullptr) return nullptr;
        if (node == p || node == q) return node;
        TreeNode* r = solve(node->right, p, q);
        TreeNode* l = solve(node->left, p, q);
        if (l && r) return node;
        return r ? r : l;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root, p, q);
    }
};