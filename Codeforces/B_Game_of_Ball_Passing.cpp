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

  ll m=-1, sum=0;
  for(ll i=0; i<n; i++)
  {
    sum+=a[i];
    m=max(m,a[i]);
  }
  if(m==0) cout<<0<<"\n";
  else if(2*m<=sum) cout<<1<<"\n";
  else cout<<2*m-sum<<"\n";
}

return 0;
}