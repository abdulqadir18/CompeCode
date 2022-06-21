#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int i=0; i<n; i++) cin>>a[i];
  vector<int>dp(n+1,-1);
  dp[0]=0;
  for(int j=1; j<n; j++)
  {
    dp[j]=INT_MAX;
    for(int i=1; i<=k && j-i>=0; i++)
    {
      int x=dp[j-i]+abs(a[j]-a[j-i]);
      dp[j]=min(dp[j],x);
    }
  }
  cout<<dp[n-1];
}