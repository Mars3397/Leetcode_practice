class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> ans(2, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (umap.find(nums[i]) == umap.end()) {
                umap[target - nums[i]] = i;
            } else {
                ans[0] = umap[nums[i]];
                ans[1] = i;
                return ans;
            }
        }
        return ans;
    }
};