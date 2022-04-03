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
    for(ll i=0; i<n; i++) cin>>a[i];
    if(n==1) cout<<((a[0]<=1)?"YES\n":"NO\n");
    else
    {
      sort(a.begin(),a.end());
      cout<<((a[n-1]-a[n-2]<=1)?"YES\n":"NO\n");
    }
  }
  return 0;
}