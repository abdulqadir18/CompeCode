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
  ll mn=INT_MAX;
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
    mn=min(mn,a[i]);
  }

  ll k=n/2;
  for(ll i=0; i<n && k!=0; i++)
  {
    if(a[i]!=mn)
    {
      cout<<a[i]<<" "<<mn<<"\n";
      k--;
    }
  }
  
}

return 0;
}