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
  for(ll i=2; i<=29; i++)
  {
    ll k=(1<<i)-1;
    if(n%k==0)
    {
      cout<<n/k<<"\n";
      break;
    }
  }
}

return 0;
}