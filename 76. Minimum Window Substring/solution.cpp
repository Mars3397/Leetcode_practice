class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> remain(128, 0);
        for (int i = 0; i < t.size(); i++) {
            remain[t[i]]++;
        }
        int required = t.size(), start = 0, end = 0, min = INT_MAX, left;
        while (end < s.size()) {
            if (remain[s[end++]]-- > 0) {
                required--;
            }
            while (!required) {
                if (end - start < min) {
                    min = end - start;
                    left = start;
                }
                if (remain[s[start++]]++ == 0) required++;
            }
        }
        return (min == INT_MAX)? "" : s.substr(left, min);
    }
};