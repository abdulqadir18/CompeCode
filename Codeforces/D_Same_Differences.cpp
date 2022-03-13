#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll fact(ll n)
{
  return (n==1 || n==0) ? 1: n * fact(n - 1);
  // return std::tgamma(n + 1);  
}

int main()
{

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0; i<n; i++) {cin>>a[i]; a[i]=a[i]-i-1;}

  //m1
  // ll ans=0;
  // for(ll i=0; i<n-1; i++)
  // {
  //   for(ll j=i+1; j<n; j++)
  //   {
  //     if(a[j]-a[i]==j-i) ans++;
  //   }
  // }
  // cout<<ans<<"\n";

  //m2
  //   sort(a.begin(),a.end());
  //   ll cur=a[0], cnt=0;
  //   ll ans=0;
  //   for(ll i=0; i<n; i++)
  //   {
  //     if(cur!=a[i])
  //     {
  //       if(cnt>=2)
  //       {
  //         ans+=(fact(cnt)/(fact(cnt-2)*2));
  //       }
  //       cur=a[i];
  //       cnt=1;
  //     }
  //     else cnt++;
  //   }
  //   if(cnt>=2)
  //   {
  //     ans+=(fact(cnt)/(fact(cnt-2)*2));
  //   }
  //   cout<<ans<<"\n";

  //m3
  map<ll,ll>m;
  ll ans=0;
  for(ll i=0; i<n; i++)
  {
    ans+=m[a[i]];
    m[a[i]]++;
  }
  cout<<ans<<"\n";
 }

return 0;
}