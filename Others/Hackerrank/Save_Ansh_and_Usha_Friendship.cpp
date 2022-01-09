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
  ll n,c,v;
  cin>>n>>c>>v;
  vector<ll>a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }

  ll i=1;
  for(; i<n; i++)
  {
    if(a[i]>a[i-1])
    {
      if(v>0)
      {
        v--;
      }
      else if(c-(a[i]-a[i-1])>=0)
      {
        c=c-(a[i]-a[i-1]);
      }
      
      else
      {
        
        break;
      }
    }
    // cout<<i<<" ";
  }
  cout<<i-1<<"\n";
}

return 0;
}