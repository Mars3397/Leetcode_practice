class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // size == 0 -> impossible
        if (wordDict.size() == 0) return false;
        
        // construct a hash table to store words
        unordered_set<string> uset(wordDict.begin(), wordDict.end());

        // find the len of logest word
        int longestWord = 0;
        for (string word : wordDict){
            longestWord = max(longestWord, (int)word.size());
        }

        // construct the dp vector -> dp[i] represent whether s.substr(0, i) is in wordDict
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        for (int i = 1; i <= s.size(); i++) {
            for (int j = i - 1; j >= max(i - longestWord, 0); j--) {
                // dp[j] == true -> s[0, j] is in wordDict -> check s[j, i - j]
                if (dp[j] && uset.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[s.size()];
    }
};