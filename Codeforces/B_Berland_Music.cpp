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
  string s;
  cin>>s;
  
  ll x=count(s.begin(),s.end(),'0');

  vector<ll>ans(n);
  for(ll i=0; i<n; i++)
  {
    if((s[i]=='0' && a[i]<=x) || (s[i]=='1' && a[i]>x))
    {
      ans[i]=a[i];
    }
  }
  for(ll i=0; i<n; i++)
  {
    if(ans[i]!=0)
    {
      continue;
    }
    else if(s[i]=='1')
    {
      
    }
  }
  cout<<"\n";
}

return 0;
}