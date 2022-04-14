#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  map<ll,ll>m;
  for(ll i=0; i<n; i++) {cin>>a[i]; m[a[i]]++;}

  ll mx=INT_MIN;
  for(auto i : m)
  {
    mx=max(mx,i.second);
  }
  cout<<mx<<" "<<m.size();
  
  return 0;
}