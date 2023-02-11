### Note
[題目](https://leetcode.com/problems/find-peak-element/description/)

- 用 binary search 去縮減搜索範圍 → 可以分成下面四種情況
    - ^ . ^ → 都可以
    - . . ^ → 往右找 left = mid + 1
    - ^ . . → 往左找 right = mid
    - . ^ . → peak element