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
  for(ll i=2; i<=n+1; i++)
  {
    cout<<i<<" ";
  }
  cout<<"\n";
}

return 0;
}