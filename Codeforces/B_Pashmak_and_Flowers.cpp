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

sort(a.begin(),a.end());
ll x=count(a.begin(),a.end(),a[0]);
ll y=count(a.begin(),a.end(),a[n-1]);

if(a[0]==a[n-1])
{
  cout<<0<<" "<<(n-1)*n/2;
}
else
{
  cout<<a[n-1]-a[0]<<" "<<x*y<<"\n";
}

return 0;
}