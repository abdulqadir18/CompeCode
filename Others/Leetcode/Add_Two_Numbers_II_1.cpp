class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=l1;
        int n1=0,n2=0;
        ListNode *temp=l1;
        stack<ListNode*>s1;
        while(temp)
        {
            n1++;
            s1.push(temp);
            temp=temp->next;
        }
        temp=l2;
        stack<ListNode*>s2;
        while(temp)
        {
            n2++;
            s2.push(temp);
            temp=temp->next;
        }
        
        if(n1<n2)
        {
            stack<ListNode*>swapTemp=s1;
            s1=s2;
            s2=swapTemp;
            ans=l2;
        }
        
        int carry=0;
        ListNode* prev;
        while(!s2.empty())
        {
            int x=s1.top()->val+s2.top()->val+carry;
            if(x>9) carry=1;
            else carry=0;
            s1.top()->val=x%10;
            s1.pop();
            s2.pop();
        }
        
        while(!s1.empty())
        {
            int x=s1.top()->val+carry;
            if(x>9) carry=1;
            else carry=0;
            s1.top()->val=x%10;
            s1.pop();
        }
        if(carry)
        {
            ListNode *add=new ListNode(1);
            add->next=ans;
            ans=add;
        }
        
        return ans;
        
    }
};