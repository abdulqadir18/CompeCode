class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans= new ListNode(0);
        ans->next=NULL;
        if(head==NULL || head->next==NULL || head->next->next==NULL) return NULL;
        
        ListNode *temp=head;
        ListNode *ansTemp=ans;
        int sum=0;
        while(temp)
        {
            sum+=temp->val;
            if(temp->val==0)
            {
                if(sum)
                {
                    ListNode * again= new ListNode(sum);
                    again->next=NULL;
                    ansTemp->next=again;
                    ansTemp=ansTemp->next;
                    
                }
                sum=0;
            }
            temp=temp->next;
        }
        ans=ans->next;
        return ans;
    }
};