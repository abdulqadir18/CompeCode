#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,m;
cin>>n>>m;
vector <ll> a(m);
for(ll i=0; i<m; i++)
{
  cin>>a[i];
}

ll ans=a[0]-1;
for(ll i=1; i<m; i++)
{
  if(a[i]>=a[i-1])
  {
    ans+=(a[i]-a[i-1]);
  }
  else
  {
    ans+=(n-a[i-1]+a[i]);
  }
}
cout<<ans;

return 0;
}