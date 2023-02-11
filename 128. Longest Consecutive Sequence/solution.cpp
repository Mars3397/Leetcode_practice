class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int max_len = 0;
        for (auto n : uset) {
            // count longest len only when n - 1 not in uset
            if (uset.count(n - 1) == 0) {
                int len = 1;
                while (uset.count(n + len)) {
                    len++;
                }
                max_len = max(max_len, len);
            }
        }
        return max_len;
    }
};