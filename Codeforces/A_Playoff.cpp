#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  ll x=1;
  for(ll i=1; i<=n; i++) x*=2;
  cout<<x-1<<"\n";
}

return 0;
}