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
  ll x,y;
  cin>>x>>y;
  ll a,b;
  cin>>a>>b;

  ll p=min(x,y);
  ll r=max(x,y);
  ll q=r-p;
  cout<<q*a+min(2*p*a,p*b)<<"\n";
}

return 0;
}