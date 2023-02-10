class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        int pp = nums[0], p = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            int tmp = max(nums[i] + pp, p);
            pp = p;
            p = tmp;
        }
        return p;
    }
};