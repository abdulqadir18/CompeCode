class Solution {
public:
    
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
        if(head==NULL)
        {
            return true;
        }
        //create new LL
        ListNode* temp=head;
        ListNode* check= new ListNode(temp->val);
        check->next=NULL;
        ListNode* checkHead=check;
        while(temp!=NULL)
        {
            ListNode* create= new ListNode(temp->val);
            create->next=NULL;
            check->next=create;
            check=check->next;
            temp=temp->next;
        }
        //reverse LL
        checkHead=reverseList(checkHead);
        
        //check both LL
        ListNode *temp1=head, *temp2=checkHead;
        while(temp1!=NULL)
        {
            if(temp1->val!=temp2->val)
            {
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return true;
        
    }
};