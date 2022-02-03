class Solution {
public:
    
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>m;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(m[cur]==1)
            {
                return cur;
            }
            m[cur]=1;
            cur=cur->next;
        }
        return cur;
    }
};