#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
ll ans;

if(n%4==0)
{
  ans=6;
}
else
{
  ll x=n%4;
  ans=pow(2,x);
}
if(n==0)
{
  cout<<1;
}
else if(n%2==0)
{
  cout<<ans;
}
else
{
  cout<<10-ans;
}


return 0;
}