class Solution {
public:
    void reorderList(ListNode* head) {
        //traversing upto mid node
        ListNode *slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *newLast=slow;
        //put nodes from mid to last in stack
        stack<ListNode*>s;
        while(slow->next!=NULL)
        {
            slow=slow->next;
            s.push(slow);
        }
        //reorder list
        ListNode *it=head;
        while(!s.empty() && it!=newLast)
        {
            s.top()->next=it->next;
            it->next=s.top();
            it=it->next->next;
            s.pop();
        }
        newLast->next=NULL;
    }
};