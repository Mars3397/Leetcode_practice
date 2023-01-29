### Note
[題目](https://leetcode.com/problems/merge-sorted-array/description/)

- 從後面往前做，比較大的先放，看哪個先放完
- 如果 nums1 先放完就把 nums2 剩下的都放進去
- 如果是 nums2 先放完就不用管了，因為 nums1 本來就在裡面了