#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

if(n==1)
{
  cout<<1;
  return 0;
}

ll cnt=1;
ll ans=-1;
for(ll i=0; i<n-1; i++)
{
  if(a[i]>a[i+1])
  {
    cnt=1;
  }
  else
  {
    cnt++;
  }
  ans=max(ans,cnt);
}
cout<<ans;

return 0;
}