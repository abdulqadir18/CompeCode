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
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans=min({a,b,c});
  a-=ans, b-=ans, c-=ans;
  ans+=min({(a+b)/3,a,b});
  cout<<ans<<"\n";
}

return 0;
}