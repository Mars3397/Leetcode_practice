class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        add(ans, 0, nums);
        return ans;
    }

    void add(vector<vector<int>> &ans, int begin, vector<int> &nums) {
        if (begin >= nums.size() - 1) {
            ans.push_back(nums);
        } else {
            for (int i = begin; i < nums.size(); i++) {
                swap(nums[begin], nums[i]);
                add(ans, begin + 1, nums);
                swap(nums[begin], nums[i]);
            }
        }
    }
};