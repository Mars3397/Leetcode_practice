### Note
[題目](https://leetcode.com/problems/symmetric-tree/description/)

- 條件這樣設比較快
```cpp
if (left == NULL && right == NULL) {
    return true;
}

if (left == NULL || right == NULL) {
    return false;
}

if (left->val != right->val) {
    return false;
}
```