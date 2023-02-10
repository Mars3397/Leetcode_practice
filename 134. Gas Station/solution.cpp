class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        for (int i = 0; i < n; i++) {
            if (gas[i] >= cost[i]) {
                int store = 0, j = 0; bool flag = true;
                for (; j < n; j++) {
                    int next = (i + j) % n;
                    store += gas[next] - cost[next];
                    if (store < 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) return i;
                i += j;
            }
        }
        return -1;
    }
};