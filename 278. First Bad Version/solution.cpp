// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (isBadVersion(1)) {
            return 1;
        }
        long left = 0, right = n;
        while (left < right) {
            long mid = (left + right) / 2;
            if (!isBadVersion(int(mid))) {
                if (isBadVersion(mid + 1)) {
                    return mid +1;
                } else {
                    left = mid;
                }
            } else {
                right = mid;
            }
        }
        return 0;
    }
};