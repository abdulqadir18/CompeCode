class Solution {
public:
    int dp[1001][1001]={};
    int kInversePairs(int n, int k) {
        if(k<=0) return k==0;
        if(!dp[n][k])
        {
            //dp[n][k]=1;
            for(int i=0; i<=min(k,n-1); i++)
            {
                dp[n][k]=(dp[n][k]+kInversePairs(n-1,k-i))%(1000000007);
            }
        }
        return dp[n][k];
    }
};