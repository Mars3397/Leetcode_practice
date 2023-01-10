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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return traversal(p, q);
    }

    bool traversal(TreeNode* p_node, TreeNode* q_node) {
        if (p_node == nullptr) {
            if (q_node == nullptr) {
                return true;
            } else {
                return false;
            }
        } else if (q_node == nullptr) {
            return false;
        } else if (p_node->val != q_node->val){
            return false;
        } else {
            return traversal(p_node->left, q_node->left) && traversal(p_node->right, q_node->right);
        }
    }
};