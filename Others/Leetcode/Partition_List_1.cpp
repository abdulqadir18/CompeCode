class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        
        ListNode *less=new ListNode(0);
        ListNode *more=new ListNode(0);
        ListNode *l=less, *m=more;
        ListNode *temp=head;
        while(temp)
        {
            if(temp->val<x) {l->next=temp; l=l->next;}
            else {m->next=temp; m=m->next;}
            temp=temp->next;
        }
        
        if(!less->next || !more->next) return head; //base case
        l->next=more->next; //joining both
        m->next=NULL;
        return less->next;
        
    }
};