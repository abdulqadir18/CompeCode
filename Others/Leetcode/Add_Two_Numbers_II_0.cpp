class Solution {
public:
    
    ListNode* reverseList(ListNode* head)
    {
        ListNode *cur,*pre,*nex;
        cur=head;
        pre=NULL;
        while(cur)
        {
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        head=pre;
        return head;
    }
    
    ListNode* addTwoNumbersI(ListNode* l1, ListNode* l2) {
        int n1=0,n2=0;
        ListNode *temp=l1;
        while(temp)
        {
            n1++;
            temp=temp->next;
        }
        temp=l2;
        while(temp)
        {
            n2++;
            temp=temp->next;
        }
        
        ListNode *temp1, *temp2, *ans;
        if(n1>=n2) 
        {
            temp1=l1;
            temp2=l2;
        }
        else
        {
            temp1=l2;
            temp2=l1;
        }
        ans=temp1;
        
        int carry=0;
        ListNode* prev;
        while(temp2)
        {
            int x=temp1->val+temp2->val+carry;
            if(x>9)
            {
                carry=1;
                temp1->val=x%10;
            }
            else
            {
                carry=0;
                temp1->val=x;
            }
            if(temp1->next==NULL) prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        while(temp1)
        {
            int x=carry+temp1->val;
            if(x>9)
            {
                carry=1;
                temp1->val=x%10;
            }
            else
            {
                carry=0;
                temp1->val=x;
            }
            if(temp1->next==NULL) prev=temp1;
            temp1=temp1->next;
        }
        
        if(carry)
        {
            ListNode *add=new ListNode(1);
            add->next=NULL;
            prev->next=add;
        }
        
        return ans;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode *ans=addTwoNumbersI(l1,l2);
        ans=reverseList(ans);
        return ans;
    }
};