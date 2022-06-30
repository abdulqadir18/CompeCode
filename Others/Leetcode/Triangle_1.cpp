class Solution {
public:
    int recurse(vector<vector<int>> a, int i, int j, vector<vector<int>>&dp)
    {
        if(i==a.size()-1) return a[i][j];
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        int down=a[i][j]+recurse(a,i+1,j,dp);
        int diag=a[i][j]+recurse(a,i+1,j+1,dp);
        return dp[i][j]= min(down,diag);
    }
    
    int minimumTotal(vector<vector<int>>& a) {
        int n=a.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MIN));
        for(int j=0; j<n; j++) dp[n-1][j]=a[n-1][j];
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i; j>=0; j--)
            {
                int down=a[i][j]+dp[i+1][j];
                int diag=a[i][j]+dp[i+1][j+1];
                dp[i][j]=min(down,diag);
            }
        }
        
        return dp[0][0];
    }
};