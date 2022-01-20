#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,x;
cin>>n>>x;
ll ans=0;
for(ll i=1; i<=min(n,x); i++)
{
  if(x%i==0 && x/i<=n)
  {
    ans++;
  }
}
cout<<ans;
return 0;
}