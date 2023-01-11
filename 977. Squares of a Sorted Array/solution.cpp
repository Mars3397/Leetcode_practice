class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int min = abs(nums[0]), min_index = 0, n = nums.size();
        for (int i = 1; i < n; i++) {
            if (abs(nums[i]) < min) {
                min = abs(nums[i]);
                min_index = i;
            }
        }
        vector<int> ans(n); ans[0] = min * min;
        bool has_left = true, has_right = true;
        int left = min_index - 1, right = min_index + 1;
        if (min_index == 0) {
            has_left = false;
        } 
        if (min_index == n - 1) {
            has_right = false;
        }
        for (int i = 1; i < n; i++) {
            if (has_left) {
                if (has_right) {
                    if (abs(nums[left]) > abs(nums[right])) {
                        ans[i] = nums[right] * nums[right];
                        if (right++ == n - 1) has_right = false;
                    } else {
                        ans[i] = nums[left] * nums[left];
                        if (left-- == 0) has_left = false;
                    }
                } else {
                    ans[i] = nums[left] * nums[left];
                    if (left-- == 0) has_left = false;
                }
            } else {
                ans[i] = nums[right] * nums[right];
                if (right++ == n - 1) has_right = false;
            }
        }
        return ans;
    }
};