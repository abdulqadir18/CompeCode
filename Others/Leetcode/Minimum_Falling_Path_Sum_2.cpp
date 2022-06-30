class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,INT_MIN));
        int ans=INT_MAX;
        //for base
        for(int j=0; j<n; j++) dp[0][j]=a[0][j];
        //rest loops
        for(int i=1; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int s=1e9, ld=1e9, rd=1e9;
                s=a[i][j]+dp[i-1][j];
                if(j>0) ld=a[i][j]+dp[i-1][j-1];
                if(j<n-1) rd=a[i][j]+dp[i-1][j+1];
                dp[i][j]=min(s,min(ld,rd));
            }
        }
        //min among last row
        for(int j=0; j<n; j++) ans=min(ans,dp[m-1][j]);
        
        return ans;
    }
};