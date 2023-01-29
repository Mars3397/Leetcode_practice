class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n < 1) return false;
        while (n % 3 == 0) {
            n /= 3;
            if (n == 1) return true;
        }
        return false;
    }
};