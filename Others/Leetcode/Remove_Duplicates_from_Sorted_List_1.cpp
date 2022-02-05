class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {   
            
            if(temp->next->val==temp->val)
            {
                ListNode* dlt=temp->next;
                temp->next=temp->next->next;
                delete(dlt);
            }
            
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};