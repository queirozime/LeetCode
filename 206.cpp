class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* last = NULL;
        ListNode* aux = NULL;
        while(curr) {
            aux = curr->next;
            curr->next = last;
            last = curr;
            curr = aux;
        }
        return last;
    }
};
