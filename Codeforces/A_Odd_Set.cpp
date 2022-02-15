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
  vector<ll>a(2*n);
  for(ll i=0; i<2*n; i++)
  {
    cin>>a[i];
  }

  ll even=0, odd=0;
  for(ll i=0; i<2*n; i++)
  {
    if(a[i]%2==0) even++;
    else odd++;
  }
  if(even==odd) cout<<"Yes\n";
  else cout<<"No\n";
}

return 0;
}