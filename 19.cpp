class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* aux = head;
        int length = 0;
        while(aux) {
            aux = aux->next;
            length++;
        }
        aux = head;
        ListNode* previous = NULL;
        
        if(length == 1) return NULL;
        if(length == n) return head->next;
        
        int beginToEnd = length - n + 1;
        for(int i = 1; i < beginToEnd; i++) {
            previous = aux;
            aux = aux->next;
        }
        if(previous)
            previous->next = aux->next;
        return head;
    }
};
