class Solution {
public:
    static bool mySort(string a, string b) {
        return a + b > b + a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> new_nums(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            new_nums[i] = to_string(nums[i]);
        }
        sort(new_nums.begin(), new_nums.end(), mySort);
        if (new_nums[0] == "0") return "0";
        string ans = "";
        for (int i = 0; i < nums.size(); i++) {
            ans += new_nums[i];
        }
        return ans;
    }
};