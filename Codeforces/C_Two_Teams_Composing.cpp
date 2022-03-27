#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>m;
    ll z=0,s=0;
    for(ll i=0; i<n; i++)
    {
      cin>>a[i];
      m[a[i]]++;
      if(z<m[a[i]])
      {
        z=m[a[i]];
        s=a[i];
      }
    }
    ll f=m.size()-1;
    if(f>=z) cout<<z<<"\n";
    else if(z-f<=1) cout<<f<<"\n";
    else cout<<f+1<<"\n";
  }
  return 0;
}