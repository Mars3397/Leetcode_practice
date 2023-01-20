class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0), mid;
        while (left < right) {
            mid = (right + left) / 2;
            if (can_split(nums, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    bool can_split(vector<int> nums, int k, int threshold) {
        int sum = 0, count = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > threshold) {
                sum = nums[i];
                count++;
                if (count > k) {
                    return false;
                }
            }
        }
        return true;
    }
};