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
  ll n;
  cin>>n;

  if(n%2==0)
  {
    for(ll i=1; i<=n; i++)
    {
      if(i%2==0)
      {
        cout<<i-1<<" ";
      }
      else
      {
        cout<<i+1<<" ";
      }
    }
  }

  else
  {
    cout<<1<<" ";
    for(ll i=2; i<=n; i++)
    {
      if(i%2==0)
      {
        cout<<i+1<<" ";
      }
      else
      {
        cout<<i-1<<" ";
      }
    }
  }
  cout<<"\n";
}

return 0;
}