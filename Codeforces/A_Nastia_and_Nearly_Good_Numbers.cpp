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
  ll a,b;
  cin>>a>>b;
  if(b==1)
  {
    cout<<"NO\n";
  }
  else
  {
    ll x=a;
    ll z=a*b*2;
    ll y=z-a;
    cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
  }
}

return 0;
}