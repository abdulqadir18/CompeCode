#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,d;
cin>>n>>d;
vector<ll>a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

ll ans=0;
for(ll i=1; i<n; i++)
{
  if(a[i]<=a[i-1])
  {
    ll x=((a[i-1]-a[i])/d +1);
    ans+=x;
    a[i]+=x*d;
  }
}
cout<<ans;
return 0;
}