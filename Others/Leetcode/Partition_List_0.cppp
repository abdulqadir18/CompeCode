class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        
        vector<ListNode*>less,more;
        ListNode *temp=head;
        while(temp)
        {
            if(temp->val<x) less.push_back(temp);
            else more.push_back(temp);
        }
        
        if(!less.size() || !more.size()) return head;
        
        for(int i=0; i<less.size()-1; i++) less[i]->next=less[i+1];
        less[less.size()-1]->next=more[0];
        for(int i=0; i<more.size()-1; i++) more[i]->next=more[i+1];
        more[more.size()-1]->next=NULL;
        return less[0];
    }
};