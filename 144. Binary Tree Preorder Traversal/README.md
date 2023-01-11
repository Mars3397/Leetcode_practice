## Note

```
void Preorder(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    cout << node->val << endl;
    Preorder(node->left);
    Preorder(node->right);
}
```

```
void Inorder(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    Inorder(node->left);
    cout << node->val << endl;
    Inorder(node->right);
}
```

```
void Postorder(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout << node->val << endl;
}
```

```
void Levelorder(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) { 
        TreeNode *node = q.front(); 
        q.pop();                          
        cout << node->val << " "; 

        if (node->left != nullptr) {
            q.push(node->left);
        }
        if (node->right != nullptr) { 
            q.push(node->right);
        }
    }
}
```