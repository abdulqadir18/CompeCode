#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int recurse(int n, int k, vector<int>a, vector<int>&dp)
{
  if(n==0) return 0;
  if(dp[n]!=-1) return dp[n];
  int ans=INT_MAX;
  for(int i=1; i<=k && n-i>=0; i++)
  {
    int x=recurse(n-i,k,a,dp)+abs(a[n]-a[n-i]);
    ans=min(ans,x);
  }
  return dp[n]=ans;
}

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int i=0; i<n; i++) cin>>a[i];
  vector<int>dp(n+1,-1);
  cout<<recurse(n-1,k,a,dp);
  return 0;
}