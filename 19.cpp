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

//two pointer solution

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        if(!fast) return head->next;
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
