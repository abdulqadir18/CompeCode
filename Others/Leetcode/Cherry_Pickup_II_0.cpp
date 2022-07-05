class Solution {
public:
    int f(vector<vector<int>>& a, int i, int j1, int j2, int m, int n, vector<vector<vector<int>>>&dp)
    {
        if(j1<0 || j1>n-1 || j2<0 || j2>n-1) return -1e8;
        if(i==m-1)
        {
            if(j1==j2) return a[i][j1];
            else return a[i][j1]+a[i][j2];
        }
        if(dp[i][j1][j2]!=INT_MIN) return dp[i][j1][j2];
        
        int res=-1e8;
        for(int dj1=-1; dj1<=1; dj1++)
        {
            for(int dj2=-1; dj2<=1; dj2++)
            {
                int val=0;
                if(j1==j2) val=a[i][j1];
                else val=a[i][j1]+a[i][j2];
                val+=f(a,i+1,j1+dj1,j2+dj2,m,n,dp);
                res=max(res,val);
            }
        }
        return dp[i][j1][j2]=res;
    }
    
    int cherryPickup(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,INT_MIN)));
        return f(a,0,0,n-1,m,n,dp);
    }
};