#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
for(ll i=0; i<n; i++)
{
  if(i%4==0) cout<<"a";
  else if(i%4==1) cout<<"b";
  else if(i%4==2) cout<<"c";
  else cout<<"d";
}

return 0;
}