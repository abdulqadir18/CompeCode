class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans= new ListNode(0);
        ListNode *real=ans;
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                ListNode *temp= new ListNode(list1->val);
                ans->next=temp;
                list1=list1->next;
            }
            else
            {
                ListNode *temp= new ListNode(list2->val);
                ans->next=temp;
                list2=list2->next;
            }
            ans=ans->next;
        }
        while(list1)
        {
            ListNode *temp= new ListNode(list1->val);
            ans->next=temp;
            ans=ans->next;
            list1=list1->next;
        }
        while(list2)
        {
            ListNode *temp= new ListNode(list2->val);
            ans->next=temp;
            ans=ans->next;
            list2=list2->next;
        }
        
        ListNode* temp=real;
        real=temp->next;
        delete(temp);
        
        return real;
    }
};