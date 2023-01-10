// version 1 2023/1/10
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size() + 1;
        vector<int> temp(n);
        temp[0] = 0;
        for (int i = 1; i < n; i++) {
            temp[i] = temp[i-1] + nums[i-1];
        }
        for (int i = 1; i < n; i++) {
            if (temp[i-1] == temp[n-1] - temp[i]) {
                return i-1;
            }
        }
        return -1;
    }
};

// version 2 2022/7/1
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right = 0, left = 0;
        for (int i = 0; i < nums.size(); i++) {
            right += nums[i];
        }
        
        for (int i = 0; i < nums.size(); i++) {
            right -= nums[i];
            if (left == right) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};