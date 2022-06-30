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
        vector<vector<int>>dp(a.size(),vector<int>(a.size(),INT_MIN));
        return recurse(a,0,0,dp);
    }
};