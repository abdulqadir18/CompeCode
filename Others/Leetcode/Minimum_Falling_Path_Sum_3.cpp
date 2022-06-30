class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<int>dp(n);
        int ans=INT_MAX;
        //for base
        for(int j=0; j<n; j++) dp[j]=a[0][j];
        //rest loops
        for(int i=1; i<m; i++)
        {
            vector<int>cur(n);
            for(int j=0; j<n; j++)
            {
                int s=1e9, ld=1e9, rd=1e9;
                s=a[i][j]+dp[j];
                if(j>0) ld=a[i][j]+dp[j-1];
                if(j<n-1) rd=a[i][j]+dp[j+1];
                cur[j]=min(s,min(ld,rd));
            }
            dp=cur;
        }
        //min among last row
        for(int j=0; j<n; j++) ans=min(ans,dp[j]);
        
        return ans;
    }
};