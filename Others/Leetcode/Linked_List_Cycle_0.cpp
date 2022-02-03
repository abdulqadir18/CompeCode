class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*, int>m;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(m[cur]==1)
            {
                return true;
            }
            m[cur]=1;
            cur=cur->next;
        }
        return false;
    }
};