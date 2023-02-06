### Note
[題目](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)

- 要分兩種情況討論，要看 target 有沒有跟 mid 在同一半邊
- 在同一半邊 → 直接正常的 binary search 就好了
- 在不同邊 → 拿 target 跟 left 比較，就可以知道要捨棄哪一半邊