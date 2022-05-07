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
    ll ans=0;
    for(ll i=1; i<=n; i++)
    {
      if(n%i==0)
      {
        string s=to_string(i);
        string r=s;
        reverse(r.begin(),r.end());
        if(s==r)ans++;
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}