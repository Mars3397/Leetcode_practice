class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        add_left_or_right(ans, "", n, 0);
        return ans;
    }

    void add_left_or_right(vector<string> &ans, string current, int left, int right) {
        if (left == 0 && right == 0) {
            ans.push_back(current);
            return;
        }
        if (left > 0) add_left_or_right(ans, current + "(", left - 1, right + 1);
        if (right > 0) add_left_or_right(ans, current + ")", left, right - 1);
    }
};