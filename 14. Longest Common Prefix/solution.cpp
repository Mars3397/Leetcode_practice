class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int ch = 0;
            while (ch < ans.size() && ch < strs[i].size() && ans[ch] == strs[i][ch]) ch++;
            ans = ans.substr(0, ch);
        }
        return ans;
    }
};