class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        int target = nums.size() / 2, ans;
        for (auto it : umap) {
            if (it.second > target) {
                ans = it.first;
            }
        }
        return ans;
    }
};