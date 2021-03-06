class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* aux = head;
        int length = 0;
        while(aux) {
            length++;
            aux = aux->next;
        }
        length = length%2 == 0 ? (length+2)/2 : (length+1)/2 ;
        aux = head;
        while(length > 1) {
            aux = aux->next;
            length--;
        }
        return aux;
    }
};


//One good solution

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
       
        return slow;
    }
};
