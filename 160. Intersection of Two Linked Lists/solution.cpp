class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode *a = headA, *b = headB;
        while (a != b) {
            a = (a)? a->next : headB;
            b = (b)? b->next : headA;
        }
        return a;
    }
};