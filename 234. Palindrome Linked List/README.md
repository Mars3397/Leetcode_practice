### Note
[題目](https://leetcode.com/problems/palindrome-linked-list/description/)

- 用兩個 pointer 一個跑的是另一個的兩倍，快的那一個到底的時候就會是慢的那個到中間的時候
- 用一個 stack 存前面一半的字（慢的 pointer 在跑的時候就可以存了）
- 如果快的 pointer 的下一個就是 NULL 的話，表示有奇數個字 → pop 掉 stack top