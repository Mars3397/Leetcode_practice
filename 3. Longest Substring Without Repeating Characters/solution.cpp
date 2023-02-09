class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maximum = 0, left = 0, right = 0;
        unordered_set<char> uset;
        while (right < s.size()) {
            if (uset.count(s[right])) {
                maximum = max(maximum, right - left);
                while (s[left] != s[right]) {
                    uset.erase(s[left++]);
                }
                left++;
            } else {
                uset.insert(s[right]);
            }
            right++;
        }

        return max(maximum, right - left);
    }
};