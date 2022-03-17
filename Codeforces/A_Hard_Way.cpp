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
  ll a[3],b[3];
  for(ll i=0; i<3; i++) cin>>a[i]>>b[i];
  ll x=0, y=-1, ans=0;
  if(b[0]==b[1]) {y=b[0]; x=b[2]; ans=abs(a[0]-a[1]);}
  else if(b[1]==b[2]) {y=b[1]; x=b[0]; ans=abs(a[1]-a[2]);}
  else if(b[2]==b[0]) {y=b[2]; x=b[1]; ans=abs(a[0]-a[2]);}

  if(y!=-1 && y>x) cout<<ans<<"\n";
  else cout<<0<<"\n";
}

return 0;
}