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
for(ll i=0; i<n; i++)
{
  for(ll j=i+1; j<n; j++)
  {
    if(abs(a[j]-a[i])<=d)ans++;
  }
}
cout<<2*ans;

return 0;
}