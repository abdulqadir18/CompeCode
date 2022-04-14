class Solution {
public:
    void solve(int o,int c, string op, vector<string>&ans)
    {
        if(o==0 && c==0)
        {
            ans.push_back(op);
            return;
        }
        
        if(o==c)
        {
            string op1=op;
            op1+='(';
            o--;
            solve(o,c,op1,ans);
        }
        else if(o==0)
        {
            string op1=op;
            op1+=')';
            c--;
            solve(o,c,op1,ans);
        }
        else
        {
            string op1=op;
            string op2=op;
            op1+='(';
            o--;
            solve(o,c,op1,ans);
            op2+=')';
            c--;
            solve(o+1,c,op2,ans);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        int o=n, c=n;
        string op="";
        vector<string>ans;
        solve(o,c,op,ans);
        return ans;
    }
};