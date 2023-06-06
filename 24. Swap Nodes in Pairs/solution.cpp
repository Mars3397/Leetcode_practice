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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *prev = new ListNode(), *dummy_head = prev;
        while (head && head->next) {
            prev->next = head->next;
            ListNode *tmp = head->next->next;
            head->next->next = head;
            head->next = tmp;
            prev = head;
            head = head->next;
        }
        return dummy_head->next;
    }
};