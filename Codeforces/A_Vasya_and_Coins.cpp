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
    ll a,b;
    cin>>a>>b;
    if(a==0) cout<<1<<"\n";
    else cout<<a+2*b+1<<"\n";
  }
  return 0;
}