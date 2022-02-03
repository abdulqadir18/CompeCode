#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll a,b,c;
  cin>>a>>b>>c;
  ll x=a+c, y=2*b-a, z=2*b-c;
  if(2*b==a+c)cout<<"YES\n";
  else if(x>2*b && x%(2*b)==0)cout<<"YES\n";
  else if(y>c && y%c==0)cout<<"YES\n";
  else if(z>a && z%a==0)cout<<"YES\n";
  else cout<<"NO\n";
}

return 0;
}