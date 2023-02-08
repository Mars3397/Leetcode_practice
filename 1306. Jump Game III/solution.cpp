class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> reached(arr.size(), false);
        queue<int> q; q.push(start);

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            reached[cur] = true;
            if (arr[cur] == 0) return true;
            if (cur + arr[cur] < arr.size() && !reached[cur + arr[cur]]) q.push(cur + arr[cur]);
            if (cur - arr[cur] >= 0 && !reached[cur - arr[cur]]) q.push(cur - arr[cur]);
        }

        return false;
    }
};