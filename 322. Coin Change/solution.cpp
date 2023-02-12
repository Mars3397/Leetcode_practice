class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        vector<int> dp(amount + 1, 10001);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (auto coin : coins) {
                if (i >= coin) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp[amount] >= 10001 ? -1 : dp[amount];
    }
};