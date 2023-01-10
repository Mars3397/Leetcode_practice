/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        for (ListNode* node = head; node != nullptr; node = node->next) {
            len++;
        }
        int nodes_each = len / k, addition = len % k;
        vector<ListNode*> ans(k, nullptr);
        if (head == nullptr) {
            return ans;
        }
        ListNode* current = head; 
        ListNode* prev = head;
        for (int i  = 0; i < k; i++) {
            ans[i] = current;
            int n = nodes_each + (addition-- > 0);
            for (int j = 0; j < n; j++) {
                prev = current;
                current = current->next;
            }
            prev->next = nullptr;
        }
        return ans;
    }
};