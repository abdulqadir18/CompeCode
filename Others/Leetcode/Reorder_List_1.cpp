class Solution {
public:
    
    ListNode* reverseList(ListNode* p)
    {
        if(p==NULL || p->next==NULL)
        {
            return p;
        }
        ListNode *remaining=reverseList(p->next);
        p->next->next=p;
        p->next=NULL;
        return remaining;
    }
    
    void reorderList(ListNode* head) {
        if(head->next==NULL || head->next->next==NULL) return;
        ListNode *slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *first=head;
        ListNode *last=reverseList(slow);
        while(first!=NULL && first->next!=NULL && last!=NULL && last->next!=NULL)
        {
            ListNode *nextLast=last->next;
            last->next=first->next;
            first->next=last;
            last=nextLast;
            first=first->next->next;
        }
    }
};