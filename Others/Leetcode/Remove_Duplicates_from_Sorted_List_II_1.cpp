class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *sentinental =new ListNode(0);
        sentinental->next=head;
        head=sentinental;
        ListNode *pre=head;
        ListNode *temp=head->next;
    
        while(temp)
        {
            if(temp->next && temp->val==temp->next->val)
            {
                while(temp->next && temp->val==temp->next->val)
                {
                    temp=temp->next;
                }
                pre->next=temp->next;
            }
            else pre=pre->next;
            temp=temp->next;
        }
        return sentinental->next;
    }
};