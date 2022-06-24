class Solution {
public:
    int recurse(int i, int j,vector<vector<int>> a,vector<vector<int>>& dp)
    {
        if(i>=0 && j>=0 && a[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=recurse(i-1,j,a,dp);
        int left=recurse(i,j-1,a,dp);
        return dp[i][j]=up+left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return recurse(m-1,n-1,a,dp);
    }
};