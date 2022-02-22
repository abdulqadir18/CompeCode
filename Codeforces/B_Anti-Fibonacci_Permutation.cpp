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
  for(ll i=0; i<n; i++) a[i]=n-i;
  for(ll i=0; i<n; i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"\n";
  for(ll i=n-2; i>=0; i--)
  {
    swap(a[i], a[i+1]);
    for(ll i=0; i<n; i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"\n";
  }
}

return 0;
}