class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int max = 1;
        for (int i = 0; i < points.size(); i++) {
            unordered_map<float, int> umap; int vertical = 1;
            for (int j = 0; j < points.size(); j++) {
                if (j == i) continue;
                int dx = points[i][0] - points[j][0];
                if (dx == 0) {
                    vertical++;
                    if (vertical > max) {
                        max = vertical;
                    }
                } else {
                    float m = (points[i][1] - points[j][1]) / float(dx);
                    if (umap.count(m)) {
                        umap[m]++;
                    } else {
                        umap[m] = 2;
                    }
                    if (umap[m] > max) {
                        max = umap[m];
                    }
                }
            }
        }
        return max;
    }
};