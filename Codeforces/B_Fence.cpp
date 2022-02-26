#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,k;
cin>>n>>k;
vector<ll>a(n);
for(ll i=0; i<n; i++) cin>>a[i];

vector<ll>cum(n+1);
ll sum=0;
for(ll i=0; i<n; i++)
{
  sum+=a[i];
  cum[i+1]=sum;
}

ll min=INT_MAX;
ll ans=0;
for(ll i=k; i<=n; i++)
{
  if(min>cum[i]-cum[i-k])
  {
    min=cum[i]-cum[i-k];
    ans=i-k+1;
  }
}

cout<<ans;

return 0;
}