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
  ll n,a,b;
  cin>>n>>a>>b;

  if(a>(n/2+1) || b<n/2 || (b<=n/2 && a<n/2))
  {
    cout<<-1<<"\n";
  }

  else
  {
    ll c=n;
    cout<<a<<" ";
    for(ll i=1; i<n/2;i++)
    {
      if(c==a || c==b)
      {
        c--;
        i--;
      }
      else
      {
        cout<<c<<" ";
        c--;
      }
    }
    cout<<b<<" ";
    for(ll i=1; i<n/2;i++)
    {
      if(c==a || c==b)
      {
        c--;
        i--;
      }
      else
      {
        cout<<c<<" ";
        c--;
      }
    }
    cout<<"\n";
  }
  
}

return 0;
}