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
    vector<int> ans;

    vector<int> preorderTraversal(TreeNode* root) {
        traversal(root);
        return ans;
    }

    void traversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        ans.push_back(node->val);
        traversal(node->left);
        traversal(node->right);
    }
};