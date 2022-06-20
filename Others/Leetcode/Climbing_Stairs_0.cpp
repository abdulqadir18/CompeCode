class Solution {
public:
    void backtrack(int n, set<string>& ans, string s, int sum)
    {
        if(n==sum) {ans.insert(s); return;}
        if(n<sum) return;
        
        sum+=1;
        s+='1';
        backtrack(n,ans,s,sum);
        sum-=1;
        s.pop_back();
        
        sum+=2;
        s+='2';
        backtrack(n,ans,s,sum);
        sum-=2;
        s.pop_back();
        
    }
    
    int climbStairs(int n) {
        set<string>ans;
        string s="";
        int sum=0;
        backtrack(n,ans,s, sum);
        return ans.size();
    }
};