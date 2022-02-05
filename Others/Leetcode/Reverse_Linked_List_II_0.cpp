//using stack
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)return head;
        stack<ListNode*>s;
        ListNode *cur=head;
        ListNode *first=NULL, *last=NULL;
        for(int i=1; i<left; i++)
        {
            first=cur;
            cur=cur->next;
        }
        for(int i=left; i<=right; i++)
        {
            s.push(cur);
            cur=cur->next;
        }
        if(first!=NULL)first->next=s.top();
        else head=s.top();
        while(!s.empty())
        {
            ListNode* temp=s.top();
            s.pop();
            if(!s.empty())
            {
                temp->next=s.top();
            }
            else
            {
                (cur)?temp->next=cur:temp->next=NULL;
            }
        }
        return head;
    }
};