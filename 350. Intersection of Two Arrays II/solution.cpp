class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        for (auto v : nums1) {
            count[v]++;
        }
        vector<int> ans;
        for (auto v : nums2) {
            if (count[v]) {
                ans.push_back(v);
                count[v]--;
            }
        }
        return ans;
    }
};