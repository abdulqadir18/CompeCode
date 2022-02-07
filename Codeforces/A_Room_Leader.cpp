#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<string>name(n);
vector<ll>s(n),u(n),a(n),b(n),c(n),d(n),e(n);
for(ll i=0; i<n; i++)
{
  cin>>name[i]>>s[i]>>u[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
}

ll max=INT_MIN;
string ans;
for(ll i=0; i<n; i++)
{
  ll x=s[i]*100-(u[i]*50)+a[i]+b[i]+c[i]+d[i]+e[i];
  if(x>=max)
  {
    max=x;
    ans=name[i];
  }
}
cout<<ans;

return 0;
}