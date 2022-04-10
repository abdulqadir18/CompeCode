#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll t;
  cin>>t;
  queue<ll>q;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n==1)
    {
      ll x,c;
      cin>>x>>c;
      while(c--) q.push(x);
    }
    else
    {
      ll c;
      cin>>c;
      ll ans=0;
      while(c--) {ans+=q.front(); q.pop();}
      cout<<ans<<"\n";
    }
  }
  return 0;
}