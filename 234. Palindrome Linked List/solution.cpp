class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head->next == nullptr) return true;

        ListNode *fast = head, *slow = head;
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next? fast->next->next : fast->next;
        }

        ListNode *newHead = reverse(slow);
        while (newHead) {
            if (newHead->val != head->val) {
                return false;
            }
            newHead = newHead->next;
            head = head->next;	
        }
        return true;
    }

    ListNode* reverse(ListNode* head) {
        ListNode *prev = nullptr, *next;
        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }	
        return prev;
    }

};