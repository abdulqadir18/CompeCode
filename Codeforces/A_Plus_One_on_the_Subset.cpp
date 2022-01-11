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
  vector<ll>a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }

  sort(a.begin(),a.end());
  cout<<a[n-1]-a[0]<<"\n";
}

return 0;
}