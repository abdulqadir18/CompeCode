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
  vector <ll> a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }
  
  ll current=a[0],cnt=0;
  sort(a.begin(),a.end());
  ll ans=1;
  for(ll i=0; i<n; i++)
  {
    if(a[i]!=current)
    {
      ans*=(cnt+1);
      cnt=1;
      current=a[i];
    }
    else
    {
      cnt++;
    }
  }
  ans*=(cnt+1);

  ll x=ans-1;
  cout<<x%1000000007<<"\n";
}

return 0;
}