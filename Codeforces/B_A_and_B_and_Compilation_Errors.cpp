#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>a(n),b(n-1),c(n-2);
for(ll i=0; i<n; i++) cin>>a[i];
for(ll i=0; i<n-1; i++) cin>>b[i];
for(ll i=0; i<n-2; i++) cin>>c[i];

sort(a.begin(),a.end());
sort(b.begin(),b.end());
sort(c.begin(),c.end());

ll flag=1;
for(ll i=0; i<n-1; i++)
{
  if(a[i]!=b[i])
  {
    flag=0;
    cout<<a[i]<<"\n";
    break;
  }
}
if(flag) cout<<a[n-1]<<"\n";

flag=1;
for(ll i=0; i<n-2; i++)
{
  if(b[i]!=c[i])
  {
    flag=0;
    cout<<b[i];
    break;
  }
}
if(flag) cout<<b[n-2];

return 0;
}