class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        if (nums[0] >= nums.size() - 1) return 1;
        int reach = nums[0], max_jump = nums[0], ans = 1;
        for (int i = 1; i < nums.size() - 1; i++) {
            max_jump = max(max_jump, nums[i] + i);
            if (max_jump >= nums.size() - 1) break;
            if (--reach == 0) {
                ++ans;
                reach = max_jump - i;
            }
        }
        return ++ans;
    }
};