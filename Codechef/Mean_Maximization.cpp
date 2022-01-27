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
  double p=0;
  for(ll i=0; i<n-1; i++)
  {
    p+=a[i];
  }
  p=p/(n-1);
  cout<<fixed;
  cout<<(p+a[n-1])<<"\n";
}

return 0;
}