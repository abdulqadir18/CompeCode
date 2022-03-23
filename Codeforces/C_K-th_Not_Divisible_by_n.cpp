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
    ll n,k;
    cin>>n>>k;
    ll ans=n*(k/(n-1))+(k%(n-1));
    (ans%n)?cout<<ans<<"\n":cout<<ans-1<<"\n";
  }
  return 0;
}