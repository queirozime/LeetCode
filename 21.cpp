class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = NULL, *p2 = NULL, *ans = NULL;
        ListNode* lastAdded = NULL;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val <= list2->val) {
            p1 = list1;
            p2 = list2;
        }else{
            p1 = list2;
            p2 = list1;
        }
        ans = p1;
        while(p1 != NULL && p2 != NULL) {
            while(p1 != NULL && p1->val <= p2->val) {
                lastAdded = p1;
                p1 = p1->next;
            }
            lastAdded->next = p2;
            ListNode* aux = p1;
            p1 = p2;
            p2 = aux;
        }
        
        
        
        
        
        return ans;
    }    
};
