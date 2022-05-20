class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>m;
        ListNode *temp=headA;
        while(temp)
        {
            m[temp]++;
            temp=temp->next;
        }
        
        temp=headB;
        while(temp)
        {
            if(m.find(temp)!=m.end()) return temp;
            temp=temp->next;
        }
        
        return NULL;
    }
};