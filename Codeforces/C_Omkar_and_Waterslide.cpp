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
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];
  ll ans=0;
  ll nowMin=a[0], nowMax=a[0];
  for(ll i=1; i<n; i++)
  {
    if(a[i]<=nowMax)
    {
      nowMin=min(a[i],nowMin);
    }
    else
    {
      ans+=nowMax-nowMin;
      nowMax=a[i];
      nowMin=a[i];
    }
  }
  ans+=nowMax-nowMin;
  cout<<ans<<"\n";
}

return 0;
}