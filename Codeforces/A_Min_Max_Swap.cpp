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
  vector<ll>a(n),b(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }
  for(ll i=0; i<n; i++)
  {
    cin>>b[i];
  }
  
  ll maxA=0, maxB=0;
  for(ll i=0; i<n; i++)
  {
    if(a[i]<b[i])
    {
      swap(a[i],b[i]);
    }
    maxA=max(a[i],maxA);
    maxB=max(b[i],maxB);
  }
  cout<<maxA*maxB<<"\n";
}

return 0;
}