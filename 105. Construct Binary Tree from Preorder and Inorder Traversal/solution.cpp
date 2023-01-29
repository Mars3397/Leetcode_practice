class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size() - 1;
        unordered_map<int, int> umap;
        for (int i = 0; i <= n; i++) {
            umap[inorder[i]] = i;
        }
        return build(preorder, umap, 0, n, 0, n);
    }

    TreeNode* build(vector<int>& preorder, unordered_map<int, int> &umap, int pl, int pr, int il, int ir) {
        if (pl > pr || il > ir) {
            return NULL;
        }

        struct TreeNode *current = new TreeNode(preorder[pl]);

        int i = umap[preorder[pl]], left_len = i - il;
        
        current->left = build(preorder, umap, pl + 1, pl + left_len, il, i - 1);
        current->right = build(preorder, umap, pl + 1 + left_len, pr, i + 1, ir);
        
        return current;
    }
};