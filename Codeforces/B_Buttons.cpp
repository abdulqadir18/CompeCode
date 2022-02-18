#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
ll ans=n;
for(ll x=n-1, y=1; x>=1 && y<=n-1; x--, y++)
{
  ans+=(x*y);
}
cout<<ans;

return 0;
}