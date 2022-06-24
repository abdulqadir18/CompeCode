class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *temp=head, *cur=head;
        ListNode *prev=NULL;
        int cnt=0;
        while(temp)
        {
            if(cur->val!=temp->val)
            {
                if(cnt>1) 
                {
                    if(head->val==cur->val) head=temp;
                    else prev->next=temp;
                    cnt=1;
                    cur=temp;
                    temp=temp->next;
                }
                else
                {
                    cnt=1;
                    prev=cur;
                    cur=temp;
                    temp=temp->next;
                }
            }
            else 
            {
                cnt++;
                cur=temp;
                temp=temp->next;
            }
        }
        if(cnt>1) 
        {
            if(head->val==cur->val) head=temp;
            else prev->next=temp;
            cnt=1;
            cur=temp;
        }
        return head;
    }
};