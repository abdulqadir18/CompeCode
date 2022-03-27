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
    ll n;
    cin>>n;
    if(n%2==0)
    {
      n=n/2;
      ll ans=1;
      for(ll i=1; i<=n; i++) ans=(ans*i)%998244353;
      ans=(ans*ans)%998244353;
      // cout<<ans<<" ";
      cout<<ans%998244353<<"\n";
    }
    else cout<<0<<"\n";
  }
  return 0;
}