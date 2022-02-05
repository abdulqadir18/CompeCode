class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        {
            return head;
        }
        ListNode *cur,*pre,*nex;
        
        cur=head;
        pre=NULL;
        ListNode* con=NULL,*tail=head;
        for(int i=1; i<left; i++)
        {
            con=cur;
            cur=cur->next;
            tail=cur;
        }
        
        for(int i=left; i<=right; i++)
        {
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        if(con)con->next=pre;
        else head=pre;
        tail->next=cur;
        return head;
    }
};