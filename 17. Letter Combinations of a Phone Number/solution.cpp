class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> map = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        generate(ans, digits, "", map);
        return ans;
    }

    void generate(vector<string> &ans, string str, string combination, vector<string> &map) {
        if (str.size() == 0) {
            if (combination != "") {
                ans.push_back(combination);
            }
            return;
        }
        int index = str[0] - '2';
        for (int i = 0; i < map[index].size(); i++) {
            generate(ans, str.substr(1), combination + map[index][i], map);
        }
    }
};