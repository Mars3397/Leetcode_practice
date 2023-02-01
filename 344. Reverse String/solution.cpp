class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size() / 2, nn = s.size() - 1;
        for (int i = 0; i < n; i++) {
            swap(s[i], s[nn - i]);
        }
    }
};