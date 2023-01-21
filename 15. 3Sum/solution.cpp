class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int front = i + 1, end = nums.size() - 1, sum;
            while (front < end) {
                sum = nums[i] + nums[front] + nums[end];
                if (sum > 0) {
                    end--;
                } else if (sum < 0) {
                    front++;
                } else {
                    ans.push_back({nums[i], nums[front], nums[end]});
                    while (front + 1 < end && nums[front] == nums[front + 1]) front++;
                    while (front < end - 1 && nums[end] == nums[end - 1]) end--;
                    front++; end--;
                }
            }
        }
        return ans;
    }
};