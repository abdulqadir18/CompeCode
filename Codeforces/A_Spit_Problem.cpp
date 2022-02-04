#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>x(n),d(n);
for(ll i=0; i<n; i++)
{
  cin>>x[i]>>d[i];
}

for(ll i=0; i<n; i++)
{
  for(ll j=0; j<n; j++)
  {
    if(i==j)continue;
    if(x[i]+d[i]==x[j] && x[j]+d[j]==x[i])
    {
      cout<<"YES";
      return 0;
    }
  }
}
cout<<"NO";
return 0;
}