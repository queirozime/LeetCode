class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *aux = head;
        ListNode *prev = NULL;
        map <int,int> mp;
        if(aux == NULL) return NULL;
        while(aux) {
            if(!mp[aux->val]) mp[aux->val]++;
            else {
                prev->next = aux->next;
                aux = aux->next;
                continue;
            }
            prev = aux;
            aux = aux->next;
        }
        
        return head;
    }
};
