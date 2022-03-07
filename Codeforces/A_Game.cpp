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
  vector<ll>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];

  ll start=0;
  for(ll i=0; i<n; i++)
  {
    if(a[i]==0){ start=i-1; break;}
  }
  ll end=0;
  for(ll i=n-1; i>=0; i--)
  {
    if(a[i]==0){ end=i+1; break;}
  }

  cout<<end-start<<"\n";

  // ll ans=0, cnt=0;
  // bool yes=false;
  // for(ll i=0; i<n; i++)
  // {
  //   if(yes && a[i]==1)
  //   {
  //     ans+=cnt+1;
  //     cnt=0;
  //     yes=false;
  //   }
  //   else if(a[i]==0) cnt++;

  //   if(a[i]==0) yes=true;
  // }
  // cout<<ans<<"\n";
  // ll change=0;
  // ll cur=1;
  // for(ll i=0; i<n; i++)
  // {
  //   if(cur!=a[i])
  //   {
  //     cur=a[i];
  //     change++;
  //   }
  // }
  // cout<<change/2+count(a.begin(),a.end(),0)<<"\n";

}

return 0;
}