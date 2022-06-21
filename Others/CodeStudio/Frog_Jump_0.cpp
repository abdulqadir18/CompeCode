#include <bits/stdc++.h>

int recurse(int n, vector<int>h)
{
    if(n==0) return 0;
    int l = recurse(n-1,h) + abs(h[n]-h[n-1]);
    int r = INT_MAX;
    if(n>1) r = recurse(n-2,h) + abs(h[n]-h[n-2]);
    return min(l,r);
}

int frogJump(int n, vector<int> &h)
{
    // Write your code here.
    return recurse(n-1,h);
}