### Note
[題目](https://leetcode.com/problems/unique-paths/description/)

- 這題其實就是排列組合：右右右右下下總共有幾種排法？
- 解：(m+n-2)! / (m-1)!(n-1)!
- 要邊乘邊除，不然會 overflow（可以整除的時候就除）