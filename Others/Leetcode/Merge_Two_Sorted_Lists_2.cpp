class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *ans= l1, *prev=l1;
        if(l2->val< l1->val)
        {
            ListNode *temp= new ListNode(l2->val);
            temp->next=prev;
            prev=temp;
            l2=l2->next;
            ans=prev;
        }
        while(l1 && l2)
        {
            if(l1->val>l2->val)
            {
                ListNode *temp= new ListNode(l2->val);
                temp->next=prev->next;
                prev->next=temp;
                l2=l2->next;
                prev=l1;
            }
            else
            {
                prev=l1;
                l1=l1->next;
            }
        }
         if(l2) prev->next=l2;
        return ans;
    }
};