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
  string s;
  cin>>s;
  string ans;
  ans+=s[0];
  for(ll i=1; i<n; i++)
  {
    if(s[i]>=s[i-1])
    {
      break;
    }
    ans+=s[i];
  }
  
  string rev=ans;
  reverse(rev.begin(),rev.end());
  ans=ans+rev;
  if(n==1 || s[1]<=s[0])
  {
    string ans2;
    ans2+=s[0];
    ans2+=s[0];
    (ans[1]>=ans2[1])?cout<<ans2<<"\n":cout<<ans<<"\n";
  }
  else
  {
    cout<<ans<<"\n";
  }
}

return 0;
}