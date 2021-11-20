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
vector<ll>x(n+1);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
  x[a[i]]=i;
}
ll m;
cin>>m;
vector<ll>q(m);
for(ll i=0; i<m; i++)
{
  cin>>q[i];
}

// sort(a.begin(),a.end());
ll vasya=0,petya=0;
for(ll i=0; i<m; i++)
{
  // ll k=binS();
  vasya+=(x[q[i]]+1);
  petya+=(n-x[q[i]]);
}
cout<<vasya<<" "<<petya;

return 0;
}