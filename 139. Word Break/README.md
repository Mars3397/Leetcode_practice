### Note
[題目](https://leetcode.com/problems/word-break/description/)

- 這題要用 DP 的 vector → dp[i] 會紀錄説 `s.substr(0, i)` 有沒有在字典裡面
- 從 `i` 往前看 `j` 個，如果 `dp[j] == true` 表示 `s.substr(0, i)` 有在字典裡面
    
    → 再檢查 `s.substr(j, i - j)` 就好了
    
- 這樣就可以避免重複找 `s` 的某段區間有沒有在 `wordDict` 裡面

```cpp
// search pattern

// leetcode
// -
// leetcode
//  -
// --
// leetcode
//   -
//  --
// ---
// leetcode
//    -
//   --
//  ---
// ----     !!! leet
// leetcode
//     -
// leetcode
//      -
//     --
// leetcode
//       -
//      --
//     ---
// leetcode
//        -
//       --
//      --- 
//     ----  !!! code
```