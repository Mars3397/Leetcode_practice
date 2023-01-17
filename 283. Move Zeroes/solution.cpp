class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[zero++] = nums[i];
            }
        }
        for (int i = zero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};