#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n, m;
  cin>>n>>m;
  vector<ll>a(n),q(m);
  map<ll,ll>mp;
  set<ll>s;
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
    mp[a[i]]++;
    s.insert(a[i]);
  }
  for(ll i=0; i<m; i++) cin>>q[i];
  
  map<ll,ll>ans;
  for(ll i=0; i<n; i++)
  {
    ans[i+1]=s.size();
    if(--mp[a[i]]<=0) s.erase(a[i]);
  }

  for(ll i=0; i<m; i++) cout<<ans[q[i]]<<"\n";
  return 0;
}