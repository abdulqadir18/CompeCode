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
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    ll flag=0;

    if(a>=x) ;
    else if(c>=x-a) c-=(x-a);
    else flag=1;

    if(b>=y) ;
    else if(c>=y-b) c-=(y-b);
    else flag=1;

    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
  }
  return 0;
}