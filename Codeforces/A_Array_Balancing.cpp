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
    vector<ll>a(n),b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];

    if(abs(a[0]-a[1])+abs(b[0]-b[1])>abs(b[0]-a[1])+abs(a[0]-b[1])) swap(a[0],b[0]);
    for(ll i=1; i<n-1; i++)
    {
      if(abs(a[i]-a[i-1])+abs(a[i]-a[i+1])+abs(b[i]-b[i-1])+abs(b[i]-b[i+1]) >= abs(b[i]-a[i-1])+abs(b[i]-a[i+1])+abs(a[i]-b[i-1])+abs(a[i]-b[i+1])) swap(a[i],b[i]);
    }
    if(abs(a[n-1]-a[n-2])+abs(b[n-1]-b[n-2])>abs(b[n-1]-a[n-2])+abs(a[n-1]-b[n-2])) swap(a[n-1],b[n-1]);

    ll ans=0;
    for(ll i=0; i<n-1; i++)
    {
      ans+=abs(a[i]-a[i+1]);
      ans+=abs(b[i]-b[i+1]);
    }
    cout<<ans<<"\n";
  }
  return 0;
}