class Solution {
public:
    
    vector<int>prevSmall(vector<int>a)
    {
        vector<int>ans(a.size());
        stack<int>s;
        for(int i=0; i<a.size(); i++)
        {
            while(!s.empty() && a[s.top()]>=a[i]) s.pop();
            if(s.empty()) ans[i]=-1;
            else ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int>nextSmall(vector<int>a)
    {
        vector<int>ans(a.size());
        stack<int>s;
        for(int i=a.size()-1; i>=0; i--)
        {
            while(!s.empty() && a[s.top()]>=a[i]) s.pop();
            if(s.empty()) ans[i]=a.size();
            else ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(vector<int>& a) {
        vector<int>ps=prevSmall(a);
        vector<int>ns=nextSmall(a);
        int maxAns=0;
        for(int i=0; i<a.size(); i++)
        {
            int area=(ns[i]-ps[i]-1)*a[i];
            maxAns=max(maxAns,area);
        }
        return maxAns;
    }
};