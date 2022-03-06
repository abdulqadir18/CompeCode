class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode *ans;
        if(l1->val<l2->val) {ans=l1; l1=l1->next;}
        else                {ans=l2; l2=l2->next;}
        
        ListNode *p=ans;
        while(l1 && l2)
        {
           if(l1->val<l2->val) {p->next=l1; l1=l1->next;}
           else                {p->next=l2; l2=l2->next;}
           p=p->next;
        }
        (l1)?p->next=l1 :p->next=l2;
        return ans;
    }
};