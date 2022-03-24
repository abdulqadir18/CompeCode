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
    if((n%2==0 && k%2!=0)||(n%2!=0 && k%2==0)) cout<<"NO\n";
    else
    {
      if((n/k)>=k) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
  return 0;
}