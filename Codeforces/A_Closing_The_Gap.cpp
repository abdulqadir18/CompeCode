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
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }

  ll sum=0;
  for(ll i=0; i<n; i++)
  {
    sum+=a[i];
  }

  if(sum%n==0)
  {
    cout<<0<<"\n";
  }
  else
  {
    cout<<1<<"\n";
  }
}

return 0;
}