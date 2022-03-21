class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode *temp=head;
        while(temp && temp->next)
        {
            if(temp->next->val==val)
            {
                if(temp->next->next)
                {
                    ListNode *temp1=temp->next;
                    temp->next=temp1->next;
                    delete(temp1);
                }
                else
                {
                    ListNode *temp1=temp->next;
                    temp->next=NULL;
                    delete(temp1);
                }
            }
            else if(temp)temp=temp->next;
        }
        
        if(head->val==val) return head->next;
        return head;
    }
};