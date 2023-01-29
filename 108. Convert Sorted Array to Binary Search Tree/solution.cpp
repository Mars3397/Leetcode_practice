class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }

    TreeNode* build(vector<int> &nums, int left, int right) {
        if (left > right) {
            return NULL;
        } 
        int mid = left + (right - left) / 2;
        TreeNode* current = new TreeNode(nums[mid]);
        current->left = build(nums, left, mid - 1);
        current->right = build(nums, mid + 1, right);
        return current;
    }
};