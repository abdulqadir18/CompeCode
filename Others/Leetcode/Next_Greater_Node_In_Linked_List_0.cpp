class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        while(head) {ans.push_back(head->val); head=head->next;}
        
        int n=ans.size();
        stack<int>s;
        for(int i=n-1; i>=0; i--)
        {
            int x=ans[i];
            while(!s.empty() && s.top()<=x) s.pop();
            if(s.empty()) ans[i]=0;
            else ans[i]=s.top();
            s.push(x);
        }
        return ans;
    }
};