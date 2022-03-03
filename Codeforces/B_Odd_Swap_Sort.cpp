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
  vector<ll>a(n),odd,even;
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
    if(a[i]%2==0) even.push_back(a[i]);
    else odd.push_back(a[i]);
  }

  if(is_sorted(even.begin(), even.end()) && is_sorted(odd.begin(), odd.end())) cout<<"Yes\n";
  else cout<<"No\n";
}

return 0;
}