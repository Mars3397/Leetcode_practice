class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] >= nums[left]) {
                if (target >= nums[left]) {
                    if (nums[mid] < target) {
                        left = mid + 1;
                    } else {
                        right = mid;
                    }
                } else {
                    left = mid + 1;
                }
            } else {
                if (target >= nums[left]) {
                    right = mid;
                } else {
                    if (nums[mid] < target) {
                        left = mid + 1;
                    } else {
                        right = mid;
                    }
                }
            }
        }

        return nums[left] == target? left : -1;
    }
};