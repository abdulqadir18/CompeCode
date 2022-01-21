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

  ll a1=abs(x-y)*a+x*b;
  ll a2=abs(x-y)*a+y*b;
  ll a3=abs(x-y)*b+x*a;
  ll a4=abs(x-y)+b+y*a;
  ll a5=(x+y)*a;
  cout<<min(a1,min(a2,min(a3,min(a4,a5))))<<"\n";
}

return 0;
}