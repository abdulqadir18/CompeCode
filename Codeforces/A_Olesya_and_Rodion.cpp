#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,t;
cin>>n>>t;
if(t==10)
{
  if(n==1)
  {
    cout<<-1;
  }
  else
  {
    ll x=n-1;
    while(x--)
    {
      cout<<1;
    }
    cout<<0;
  }
}
else
{
  while(n--)
  {
    cout<<t;
  }
}
return 0;
}