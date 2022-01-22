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
  ll a,b,k;
  cin>>a>>b>>k;
  if(b-a==0)
  {
    if(b>1)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
  else
  {
    ll cnt=0;
    if(((b-a)/2+1)%2==0)
    {
      cout<<"YES\n";
    }
    else
    {
      if(b%2==0)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
  }
}

return 0;
}