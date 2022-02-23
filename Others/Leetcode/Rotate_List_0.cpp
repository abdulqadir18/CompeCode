class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            temp=temp->next;
            n++;
        }
        k=k%n;
        temp=head;
        ListNode* tojoin=head;
        for(int i=1; i<n-k; i++)
        {
            temp=temp->next;
        }
        if(k==0) return head;
        ListNode* last=temp;
        ListNode* from=temp->next;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=tojoin;
        last->next=NULL;
        return from;
    }
};