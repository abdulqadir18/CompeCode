#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int recurse(int n, int k, vector<int>a)
{
  if(n==0) return 0;
  int ans=INT_MAX;
  for(int i=1; i<=k && n-i>=0; i++)
  {
    int x=recurse(n-i,k,a)+abs(a[n]-a[n-i]);
    ans=min(ans,x);
  }
  return ans;
}

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int i=0; i<n; i++) cin>>a[i];
  cout<<recurse(n-1,k,a);
  return 0;
}