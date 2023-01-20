class Solution {
public:
    bool above_k(int m, int n, int k, int number) {
        int smaller = 0, current = 0;
        for (int i = 1; i < m + 1; i++) {
            current = min(number / i, n);
            if (current == 0) {
                break;
            } else {
                smaller += current;
            }
        }
        return smaller >= k;
    }

    int findKthNumber(int m, int n, int k) {
        int left = 1, right = m * n, mid;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (above_k(m, n, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};