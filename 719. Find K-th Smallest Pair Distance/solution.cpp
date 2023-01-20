class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums[nums.size() - 1] - nums[0], mid;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (above_k(nums, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    bool above_k(vector<int> nums, int k, int distance) {
        int smaller = 0, j = 1;
        for (int i = 0; i < nums.size(); i++) {
            while (j < nums.size() && abs(nums[i] - nums[j]) <= distance) {
                j++;
            }
            smaller += j - i - 1;
        }
        return smaller >= k;
    }
};