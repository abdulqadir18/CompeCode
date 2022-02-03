class Solution {
public:
    
    ListNode *hasCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        while(fast!=NULL &&   fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                return slow;
            }
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        ListNode *start=head;
        ListNode *last=hasCycle(head);
        
        while(start!=NULL && last!=NULL)
        {
            if(start==last)
            {
                return start;
            }
            start=start->next;
            last=last->next;
        }
        return NULL;
    }
};