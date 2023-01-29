class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return recursive(root->left, root->right);
    }

    bool recursive(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) {
            return true;
        }

        if (left == NULL || right == NULL) {
            return false;
        }
        
        if (left->val != right->val) {
            return false;
        }

        return recursive(left->left, right->right) && recursive(left->right, right->left);
    }
};