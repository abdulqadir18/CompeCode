#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll n,x;
  cin>>n>>x;
  vector<ll>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];

  // for(ll k=0; k<=n; k++)
  // {
  //   vector<ll>min=a;
  //   sort(min.begin(),min.end(),greater<ll>());
  //   ll minCnt=k;
  //   map<ll,ll>m;
  //   while(minCnt--)
  //   {
  //     m[min[minCnt]]++;
  //   }
  //   vector<ll>check=a;
  //   for(ll i=0; i<n; i++)
  //   {
  //     if(m[check[i]]>0)
  //     {
  //       m[check[i]]--;
  //       check[i]+=x;
  //     }
  //   }
  //   ll curSum=0, maxSum=0;
  //   for(ll i=0; i<n; i++)
  //   {
  //     cout<<check[i]<<" ";
  //     curSum+=check[i];
  //     maxSum=max(curSum,maxSum);
  //     if(curSum<0) curSum=0;
  //   }
  //   cout<<maxSum<<"\n";
  // }
  // cout<<"\n";

  for(ll k=0; k<=n; k++)
  {
    ll maxSum=0;
    for(ll i=0; i<n; i++)
    {
      ll curSum=0;
      for(ll j=i; j<n; j++)
      {
        curSum+=a[j];
        maxSum=max(curSum,maxSum);
      }
    }
    cout<<maxSum<<" ";
  }
  cout<<"\n";
}

return 0;
}