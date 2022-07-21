class Solution {
public:
    
    int kInversePairs(int N, int K) {
        int dp[1001][1001]={1};
        for(int n=1; n<=N; n++)
        {
            for(int k=0; k<=K; k++)
            {
                for(int i=0; i<=min(k,n-1); i++)
                {
                    dp[n][k]=(dp[n][k]+dp[n-1][k-i])%1000000007;
                }
            }
        }
        return dp[N][K];
    }
};