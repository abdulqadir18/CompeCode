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

    ll flag1=0, j=0;
    for(ll i=0; i<n; i++)
    {
      if(a[i]==1) 
      {
        flag1=1;
        j=i;
        break;
      }
    }

    ll flag2=1; ll c=1;
    for(ll i=j; j<n; j++)
    {
      if(a[i]!=c)
      {
        flag2=0;
        break;
      }
      c++;
    }

    ll flag3=1; ll x=2;
    for(ll i=0; i<j; i++)
    {
      if(a[i]!=x)
      {
        flag3=0;
        break;
      }
      x++;
    }
    if(flag1 && flag2 && flag3) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}