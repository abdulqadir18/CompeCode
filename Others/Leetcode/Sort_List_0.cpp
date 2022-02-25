class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>a;
        ListNode *temp=head;
        while(temp)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.rbegin(),a.rend());
        temp=head;
        while(temp)
        {
            temp->val=a.back();
            a.pop_back();
            temp=temp->next;
        }
        return head;
    }
};