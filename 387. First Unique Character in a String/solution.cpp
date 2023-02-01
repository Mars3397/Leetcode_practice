class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> number(26, 0), index(26);
        for (int i = 0; i < s.size(); i++) {
            number[s[i] - 'a']++;
            if (number[s[i] - 'a'] == 1) {
                index[s[i] - 'a'] = i;
            }
        }
        int idx = s.size();
        for (int i = 0; i < 26; i++) {
            if (number[i] == 1 && index[i] < idx) {
                idx = index[i];
            }
        }
        return idx == s.size()? -1 : idx;
    }
};