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
  ll pw=1000*1000*1000;
  ll ans=0;
  while(n>0)
  {
    while(pw>n)pw=pw/10;
    ans+=pw;
    n=n-(pw-pw/10);
  }
  cout<<ans<<"\n";
}

return 0;
}