class Solution {
public:
    map<vector<int>,int>m;
    
    void solve(vector<int>ip, vector<int>&op, vector<vector<int>>&ans)
    {
        if(ip.size()==0)
        {
            sort(op.begin(),op.end());
            m[op]++;
            if(m[op]==1) ans.push_back(op);
            //cout<<"hello\n";
            return;
        }
        vector<int>op1=op;
        vector<int>op2=op;
        //cout<<ip[0]<<"\n";
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,ans);
        solve(ip,op2,ans);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(ip,op,ans);
        return ans;
    }
};