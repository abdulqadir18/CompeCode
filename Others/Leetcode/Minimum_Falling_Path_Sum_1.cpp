class Solution {
public:
    int recurse(vector<vector<int>> a,int i, int j,vector<vector<int>>& dp)
    {
        if(j<0 || j>a.size()-1) return 1e9;
        if(i==0) return a[0][j];
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        int s=a[i][j]+recurse(a,i-1,j,dp);
        int ld=a[i][j]+recurse(a,i-1,j-1,dp);
        int rd=a[i][j]+recurse(a,i-1,j+1,dp);
        return dp[i][j]=min(s,min(ld,rd));
    }
    
    int minFallingPathSum(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,INT_MIN));
        int ans=INT_MAX;
        for(int j=0; j<n; j++)
        {
            dp[m-1][j]=recurse(a,m-1,j,dp);
            ans=min(ans,dp[m-1][j]);
        }
        return ans;
    }
};