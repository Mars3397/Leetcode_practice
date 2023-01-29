class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int front = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                nums[front] = nums[i];
            } else {
                nums[++front] = nums[i];
            }
        }
        return front + 1;
    }
};