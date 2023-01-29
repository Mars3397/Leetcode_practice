class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i = 1; i <= numRows; i++) {
            vector<int> vec(i, 1);
            for(int j = 1; j < i - 1; j++) {
                vec[j] = ans[i-2][j-1] + ans[i-2][j];
            }
            ans[i - 1] = vec;
        }
        return ans;
    }
};