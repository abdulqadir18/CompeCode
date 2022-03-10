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

  ll ans=0;
  for(ll i=0; i<n-1; i++)
  {
    for(ll j=i+1; j<n; j++)
    {
      if(a[j]-a[i]==j-i) ans++;
    }
  }
  cout<<ans<<"\n";
}

return 0;
}