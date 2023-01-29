class Solution {
public:
    bool isPalindrome(ListNode* head) {
        struct ListNode *a = head, *b = head;
        stack<int> s;
        while (b) {
            s.push(a->val);
            a = a->next;
            if (b->next) {
                b = b->next->next;
            } else {
                b = b->next;
                s.pop();
            }
        }
        while (a) {
            if (a->val != s.top()) {
                return false;
            }
            s.pop();
            a = a->next;
        }
        return true;
    }
};