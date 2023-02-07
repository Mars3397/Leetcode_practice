class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int len = 0;
        while (len <= nums.size()) {
            generate(ans, 0, len, nums, {});
            len++;
        }
        return ans;
    }

    void generate(vector<vector<int>> &ans, int begin, int len, vector<int>& nums, vector<int> current) {
        if (len == 0) {
            ans.push_back(current);
            return;
        } 
        for (int i = begin; i < nums.size(); i++) {
            current.push_back(nums[i]);
            generate(ans, i + 1, len - 1, nums, current);
            current.pop_back();
        }
    }
};