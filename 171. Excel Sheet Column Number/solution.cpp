class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char ch : columnTitle){
            int d = ch - 'A' + 1;
            ans = ans * 26 + d;
        }
        return ans;
    }
};