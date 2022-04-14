class Solution{
public:
    void insrt(stack<int>&s,int temp)
    {
        if(s.size()==0){s.push(temp); return;}
        int val=s.top();
        s.pop();
        insrt(s,temp);
        s.push(val);
    }
    void solve(stack<int>&s)
    {
        if(s.size()==1) return;
        int temp=s.top();
        s.pop();
        solve(s);
        insrt(s,temp);
    }
    stack<int> Reverse(stack<int> &s){
        solve(s);
        return s;
    }
};