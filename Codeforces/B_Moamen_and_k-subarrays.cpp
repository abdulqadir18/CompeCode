#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{

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
    a[i].second=i;
  }
  sort(a.begin(),a.end());

  ll cnt=1;
  for(ll i=1; i<n; i++)
  {
    if(a[i].second!=a[i-1].second+1) cnt++;
  }
  

  if(cnt<=k) cout<<"Yes\n";
  else cout<<"No\n";
}

return 0;
}