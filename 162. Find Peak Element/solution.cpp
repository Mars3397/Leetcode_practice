class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) return 0;
	
        int left = 0, right = nums.size() - 1;
        while (left < right) {
		    int mid = left + (right - left) / 2;
		
            // mid > right
		    if (nums[mid] > nums[mid + 1]) {
                // mid == 0 || mid > left -> peak element
                if (mid == 0 || nums[mid] > nums[mid - 1]) return mid;
                // mid < left
                right = mid;
            } 
            // mid < right
            else { 
                left = mid + 1;
            }
        }
        return left;

    }
};