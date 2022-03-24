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
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    ll ans=0, sign;
    if(a[0]>0) sign=1;
    else sign=0;
    ll cur=sign;
    ll add=a[0];
    for(ll i=0; i<n; i++)
    {
      if(a[i]>0) cur=1;
      else cur=0;
      if(cur!=sign)
      {
        ans+=add;
        add=a[i];
        if(sign) sign=0;
        else sign=1;
      }
      else
      {
        add=max(add,a[i]);
      }
    }
    ans+=add;
    cout<<ans<<"\n";
  }
  return 0;
}