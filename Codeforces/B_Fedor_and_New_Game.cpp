#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll setBits(ll x)
{
  ll cnt=0;
  while(x)
  {
    x&=(x-1);
    cnt++;
  }
  return cnt;
}

int main()
{
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>a(m);
  for(ll i=0; i<m; i++) cin>>a[i];
  ll f;
  cin>>f;
  
  ll ans=0;
  for(ll i=0; i<m; i++)
  {
    if(setBits(a[i]^f)<=k) ans++;
  }
  cout<<ans;
  return 0;
}