class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int x) {
        ListNode* temp1=head;
        int n=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            n++;
        }
        temp1=head;
        if(n-x+1==1)
        {
            head=temp1->next;
            delete(temp1);
            return head;
        }
        
        for(int i=1; i<n-x; i++)
        {
            temp1=temp1->next;
        }
        ListNode* temp2=temp1->next;
        temp1->next=temp2->next;
        delete(temp2);
        return head;
    }
};