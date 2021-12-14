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
  ll n,m;
  cin>>n>>m;
  if(n==m)
  {
    cout<<2*(n+1)<<"\n";
    ll x=n+1;
    while(x--)
    {
      cout<<"01";
    }
  }

  else if(n>m)
  {
    cout<<2*m + 3*(n-m)<<"\n";
    ll y=m;
    while(y--)
    {
      cout<<"01";
    }
    ll x=n-m;
    while(x--)
    {
      cout<<"010";
    }
  }

  else
  {
    cout<<2*n + 3*(m-n)<<"\n";
    ll y=n;
    while(y--)
    {
      cout<<"10";
    }
    ll x=m-n;
    while(x--)
    {
      cout<<"101";
    }
  }
  cout<<"\n";
}

return 0;
}