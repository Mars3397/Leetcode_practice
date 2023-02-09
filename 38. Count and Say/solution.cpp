class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string ans = "1";
        for (int i = 2; i <= n; i++) {
            ans = say(ans);
        }
        return ans;
    }

    string say(string &n) {
        string ans = "";
        for (int i = 0; i < n.size(); ) {
            char front = n[i]; int count = 0;
            while (i < n.size() && n[i] == front) {
                count++;
                i++;
            }
            ans += to_string(count) + front;
        }
        return ans;
    }
};