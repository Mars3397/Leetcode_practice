class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (m > bloomDay.size() / k) {
            return -1;
        }
        int left = INT_MAX, right = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] < left) {
                left = bloomDay[i];
            } 
            if (bloomDay[i] > right) {
                right = bloomDay[i];
            }
        }
        while (left < right) {
            int mid = left + (right - left) / 2;
            int total = 0, count = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    count++;
                    if (count == k) {
                        total++;
                        count = 0;
                    }
                } else {
                    count = 0;
                }
            }
            if (total >= m) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};