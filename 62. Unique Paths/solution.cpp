class Solution {
public:
    int uniquePaths(int m, int n) {
        int total = m + n - 2, len;
        if (m > n) {
            len = n - 1;
        } else {
            len = m - 1;
        }
        long ans = 1, divide = 1, copy_len = len;
        while (len--) {
            ans *= total--;
            if (ans % divide == 0) ans /= divide++;
        }
        while (divide < copy_len) {
            ans /= divide++;
        }
        return ans;
    }
};