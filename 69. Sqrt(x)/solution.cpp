class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x, mid;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (mid >= x / mid) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return (left > x / left)? left - 1 : left;
    }
};