#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  vector<string>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];

  map<string,ll>m;
  for(ll i=0; i<n; i++)
  {
    m[a[i]]++;
    if(m[a[i]]==1) cout<<"OK\n";
    else
    {
      cout<<a[i]<<to_string(m[a[i]]-1)<<"\n";
    }
  }
  return 0;
}