class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n=-1;
        ListNode *temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        
        temp=head;
        int ans=0;
        while(temp)
        {
            ans+=(temp->val*pow(2,n));
            temp=temp->next;
            n--;
        }
        
        return ans;
    }
};