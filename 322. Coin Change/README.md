### Note
[題目](https://leetcode.com/problems/coin-change/description/)

- 這題是 DP → 從 `i = 0` 到 `i = amount`，`dp[i]` 會存現在這個金額最少可以用多少 coin 組成
- `dp[i]` 就會是對於所有可以當作最後一個組成 i 的 coin 來說，最小的 `dp[i - coin]`
- 這題因為範圍只到 $10^4$ → 可以用 10001 代替 `INT_MAX`