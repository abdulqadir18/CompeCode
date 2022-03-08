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
  if(b[0]==b[1]) cout<<b[0]<<"\n";
  else if(b[1]==b[2]) cout<<b[1]<<"\n";
  else if(b[2]==b[0]) cout<<b[2]<<"\n";
  else cout<<0<<"\n";
}

return 0;
}