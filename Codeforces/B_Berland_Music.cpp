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

  ll cnt0=1, cnt1=x+1;
  for(ll i=0; i<n; i++)
  {
    if(s[i]=='0')
    {
      cout<<cnt0<<" ";
      cnt0++;
    }
    else
    {
      cout<<cnt1<<" ";
      cnt1++;
    }
  }
  cout<<"\n";
}

return 0;
}