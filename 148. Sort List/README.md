### Note
[題目](https://leetcode.com/problems/sort-list/description/)

- 這題可以想成 Linked List 的 merge sort
- 每次都先用 fast and slow pointer 把 linked list 切兩半 → 直到長度為一
- 接著再從小到大，把兩個 linked list merge 起來