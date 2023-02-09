class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, i = 0, right = nums.size() - 1;
        while (i <= right) {
            if (nums[i] == 1) {
                i++;
            } else if (nums[i] == 0) {
                swap(nums[left++], nums[i++]);
            } else {
                swap(nums[i], nums[right--]);
            }
        }
    }
};