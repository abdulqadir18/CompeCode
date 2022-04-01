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
    ll x,y;
    cin>>x>>y;
    if(x==0 && y==0) cout<<0<<"\n";
    else if(sqrt(x*x+y*y)-floor(sqrt(x*x+y*y))) cout<<2<<"\n";
    else cout<<1<<"\n";
  }
  return 0;
}