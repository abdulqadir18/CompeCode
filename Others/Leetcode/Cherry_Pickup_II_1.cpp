class Solution {
public:
    
    int cherryPickup(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,INT_MIN)));
        //base case
        for(int j1=0; j1<n; j1++)
        {
            for(int j2=0; j2<n; j2++)
            {
                if(j1==j2) dp[m-1][j1][j2]=a[m-1][j1];
                else dp[m-1][j1][j2]=a[m-1][j1]+a[m-1][j2];
            }
        }
        
        //main loop
        for(int i=m-2; i>=0; i--)
        {
            for(int j1=0; j1<n; j1++)
            {
                for(int j2=0; j2<n; j2++)
                {
                    int res=-1e8;
                    for(int dj1=-1; dj1<=1; dj1++)
                    {
                        for(int dj2=-1; dj2<=1; dj2++)
                        {
                            int val=0;
                            if(j1==j2) val=a[i][j1];
                            else val=a[i][j1]+a[i][j2];
                            if(j1+dj1>=0 && j1+dj1<n && j2+dj2>=0 && j2+dj2<n)
                            {val+=dp[i+1][j1+dj1][j2+dj2];}
                            res=max(res,val);
                        }
                    }
                    dp[i][j1][j2]=res;
                }
            }
        }
        return dp[0][0][n-1];
    }
};