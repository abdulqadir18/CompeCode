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
  ll n;
  cin>>n;
  if(n==1) cout<<1<<"\n";
  else if(n==2) cout<<2<<"\n";
  else if(n%3==0)
  {
    for(ll i=1; i<=n/3; i++)
    {
      cout<<21;
    }
    cout<<"\n";
  }
  else if(n%3==1)
  {
    for(ll i=1; i<=n/3; i++)
    {
      cout<<12;
    }
    cout<<1<<"\n";
  }
  else 
  {
    for(ll i=1; i<=n/3; i++)
    {
      cout<<21;
    }
    cout<<2<<"\n";
  }
}

return 0;
}