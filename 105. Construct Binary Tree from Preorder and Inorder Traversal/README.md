### Note
[題目](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)

- preorder 跟 inorder 的開始結束位置要分開，他們會長得不一樣
- 對於每個 root，在 inorder root 左邊就會在左邊，反之亦然
- preorder 會略過 1, inorder 會略過 i