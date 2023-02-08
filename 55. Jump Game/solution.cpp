class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        if (nums[0] == 0) return false;
        int reach = nums[0];
        for (int i = 1; i < nums.size() - 1; i++) {
            reach = max(reach, nums[i] + i);
            if (reach == i) return false;
        }
        return true;
    }
};