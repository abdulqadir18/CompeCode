class Solution {
public:
    
    ListNode* middleList(ListNode* m)
    {
        ListNode *slow=m, *fast=m;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* p)
    {
        if(p==NULL || p->next==NULL)
        {
            return p;
        }
        ListNode* remaining=reverseList(p->next);
        p->next->next=p;
        p->next=NULL;
        return remaining;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* first=head;
        ListNode* mid=middleList(head);
        ListNode* last=reverseList(mid);
        while(last!=NULL)
        {
            if(last->val!=first->val)
            {
                return false;
            }
            last=last->next;
            first=first->next;
        }
        return true;
    }
};