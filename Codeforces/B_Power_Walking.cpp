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
    set<ll>s;
    for(ll i=0; i<n; i++)
    {
      cin>>a[i];
      s.insert(a[i]);
    }

    ll cnt=s.size();
    for(ll k=1; k<=n; k++)
    {
      cout<<max(cnt,k)<<" ";
    }
    cout<<"\n";
  }
  return 0;
}