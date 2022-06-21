#include <bits/stdc++.h>

int frogJump(int n, vector<int> &h)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    dp[0]=0;
    for(int i=1; i<n; i++)
    {
        int l = dp[i-1] + abs(h[i]-h[i-1]);
        int r=INT_MAX;
        if(i>1) r = dp[i-2] + abs(h[i]-h[i-2]);
        dp[i] = min(l,r);
    }
    return dp[n-1];
}