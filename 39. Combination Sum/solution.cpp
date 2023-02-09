class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        add(ans, cur, target, candidates, 0);
        return ans;
    }

    void add(vector<vector<int>> &ans, vector<int> &cur, int target, vector<int>& candidates, int begin) {
        if (target == 0) {
            ans.push_back(cur);
            return;
        } 
        if (target < 0) return;

        for (int i = begin; i < candidates.size(); i++) {
            cur.push_back(candidates[i]);
            add(ans, cur, target - candidates[i], candidates, i);
            cur.pop_back();
        }
    }
};