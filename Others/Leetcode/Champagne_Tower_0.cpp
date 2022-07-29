class Solution {
public:
    // void f(double poured, int i, int j, vector<vector<int>>&dp, int r, int c)
    // {
    //     if(poured==0) return;
    //     if(i>=r || j>=c) return;
    //     if(poured>1)
    //     {
    //         double x=(poured-1)/2;
    //         dp[i+1][j]+=x;   if(dp[i+1][j]>1) dp[i+1][j]=1;
    //         dp[i+1][j+1]+=x; if(dp[i+1][j+1]>1) dp[i+1][j+1]=1;
    //         f(x,i+1,j,dp,r,c);
    //         f(x,i+1,j+1,dp,r,c);
    //     }
    //     else return;
    // }
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>dp(query_row+1,vector<double>(query_row+1,0));
        // f((double)poured,0,0,dp,query_row,query_glass);
        double x=(double)poured;
        dp[0][0]=x;
        // cout<<"\n";
        for(int i=1; i<=query_row; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(j>0 && ((dp[i-1][j-1]-1)/2)>0)
                {
                    dp[i][j]+=(dp[i-1][j-1]-1)/2;
                    // if(dp[i][j]<0) dp[i][j]=0;
                }
                if(j<i && ((dp[i-1][j]-1)/2)>0)
                {
                    dp[i][j]+=(dp[i-1][j]-1)/2;
                    // if(dp[i][j]<0) dp[i][j]=0;
                }
                // cout<<dp[i][j]<<" ";
            }
            // cout<<"\n";
        }
        return (dp[query_row][query_glass]>=1)?1:dp[query_row][query_glass];
    }
};