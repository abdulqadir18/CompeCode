class Solution {
public:
    int f(int m, int n, int maxMove, int i, int j, vector<vector<vector<long long>>>&dp)
    {
        if((i>m-1 || i<0 || j>n-1 || j<0))
        {
            return maxMove>=0?1:0;
        }
        
        if(maxMove<0) return 0;
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove];
        int up=f(m,n,maxMove-1,i-1,j,dp);
        int down=f(m,n,maxMove-1,i+1,j,dp);
        int left=f(m,n,maxMove-1,i,j-1,dp);
        int right=f(m,n,maxMove-1,i,j+1,dp);
        return dp[i][j][maxMove]=((long long)up+(long long)down+(long long)left+(long long)right)%(1000000007);
    }
    
    int findPaths(int m, int n, int maxMove, int i, int j) {
        vector<vector<vector<long long>>>dp(m+1,vector<vector<long long>>(n+1,vector<long long>(maxMove+1,-1)));
        return f(m,n,maxMove,i,j,dp);  
    }
};