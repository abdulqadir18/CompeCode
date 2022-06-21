#include <bits/stdc++.h>

int frogJump(int n, vector<int> &h)
{
    // Write your code here.
    int prev2=0, prev=0, cur=0;
    for(int i=1; i<n; i++)
    {
        int l = prev + abs(h[i]-h[i-1]);
        int r=INT_MAX;
        if(i>1) r = prev2 + abs(h[i]-h[i-2]);
        cur = min(l,r);
        prev2=prev;
        prev=cur;
    }
    return prev;
}