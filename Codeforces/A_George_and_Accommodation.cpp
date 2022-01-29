#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>p(n),q(n);
for(ll i=0; i<n; i++)
{
  cin>>p[i]>>q[i];
}

ll cnt=0;
for(ll i=0; i<n; i++)
{
  if(q[i]-p[i]>=2)
  {
    cnt++;
  }
}
cout<<cnt;
return 0;
}