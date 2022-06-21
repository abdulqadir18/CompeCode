#include <bits/stdc++.h>

int recurse(int n, vector<int>h, vector<int> &dp)
{
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int l = recurse(n-1,h,dp) + abs(h[n]-h[n-1]);
    int r = INT_MAX;
    if(i>1) r = recurse(n-2,h,dp) + abs(h[n]-h[n-2]);
    return dp[n]=min(l,r);
}

int frogJump(int n, vector<int> &h)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return recurse(n-1,h,dp);
}