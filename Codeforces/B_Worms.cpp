#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{

ll n;
cin>>n;
vector<ll>a(n);
for(ll i=0; i<n; i++) cin>>a[i];
ll m;
cin>>m;
vector<ll>q(m);
for(ll i=0; i<m; i++) cin>>q[i];

vector<pair<ll,ll>> v(n);
ll sum=0;
for(ll i=0; i<n; i++)
{
  v[i].first=sum+1;
  sum+=a[i];
  v[i].second=sum;
}

map<ll,ll>ans;
ll j=0;
vector<ll> z(n);
z=q;
sort(q.begin(),q.end());
for(ll i=0; i<n && j<m;)
{
  if(q[j]>=v[i].first && q[j]<=v[i].second)
  {
    ans[q[j]]=i+1;
    j++;
  }
  else i++;
}

for(ll i=0; i<m; i++)
{
  cout<<ans[z[i]]<<"\n";
}

return 0;
}