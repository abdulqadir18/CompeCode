class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // cout<<"\n";
        if(!head || !head->next) return head;
        unordered_map<int,int>m;
        ListNode *temp=head;
        while(temp)
        {
            m[temp->val]++;
            temp=temp->next;
        }
        
        temp=head;
        ListNode *ans=NULL, *ans1=NULL;
        while(temp)
        {
            if(m[temp->val]==1 && !ans1)
            {
                ans=temp;
                ans->next=NULL;
                ans1=ans;
            }
            else if(m[temp->val]==1)
            {
                ans->next=temp;
                ans=ans->next;
                ans->next=NULL;
            }
            temp=temp->next;
        }
        return ans1;
    }
};