class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (v.size() == 0 || nums[i] > v[v.size()-1]) {
                v.emplace_back(nums[i]);
            }
            else {
                auto exchanged = lower_bound(v.begin(), v.end(), nums[i]);
                *exchanged = nums[i];
            }
        }
        return v.size();
    }
};