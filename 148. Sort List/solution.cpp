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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *slow = head, *fast = head, *tmp = slow;
        while (fast && fast->next) {
            tmp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        tmp->next = NULL;
        return mergeList(sortList(head), sortList(slow));
    }

    ListNode* mergeList(ListNode* head1, ListNode* head2) {
        ListNode *new_head;
        if (head1->val < head2->val) {
            new_head = head1;
            head1 = head1->next;
        } else {
            new_head = head2;
            head2 = head2->next;
        }
        ListNode *merged_head = new_head;
        while (head1 && head2) {
            if (head1->val < head2->val) {
                new_head->next = head1;
                head1 = head1->next;
                new_head = new_head->next;
            } else {
                new_head->next = head2;
                head2 = head2->next;
                new_head = new_head->next;
            }
        }

        if (head1) {
            new_head->next = head1;
            head1 = head1->next;
        }
        if (head2) {
            new_head->next = head2;
            head2 = head2->next;
        }

        return merged_head;
    }
};