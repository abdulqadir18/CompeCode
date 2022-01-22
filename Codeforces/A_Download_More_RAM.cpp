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
  ll n,k;
  cin>>n>>k;
  vector<pair<ll,ll>>a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i].first;
  }
  for(ll i=0; i<n; i++)
  {
    cin>>a[i].second;
  }

  sort(a.begin(),a.end());
  ll mx=-1;
  for(ll i=0; i<n; i++)
  {
    if(a[i].first<=k)
    {
      k+=a[i].second;
      mx=max(mx,k);
    }
  }
  cout<<max(mx,k)<<"\n";
}

return 0;
}