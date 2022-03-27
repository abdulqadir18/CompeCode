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
    string s;
    cin>>s;

    ll ans=0;
    for(ll i=0; i<n-2; i++)
    {
      if(s[i]=='0' && s[i+1]=='0')ans+=2;
      else if(s[i]=='0' && s[i+2]=='0')ans++;
    }
    if(s[n-2]=='0' && s[n-1]=='0')ans+=2;
    cout<<ans<<"\n";
  }
  return 0;
}