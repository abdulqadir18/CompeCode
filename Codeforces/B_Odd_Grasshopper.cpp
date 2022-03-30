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
    ll x,n;
    cin>>x>>n;
    ll even=0,full=0;
    ll m=0;
    if(n%2==0) m=n/2;
    else m=(n-1)/2;
    even=m*(m+1);
    full=n*(n+1)/2;
    if(x%2==0) cout<<x+2*even-full<<"\n";
    else cout<<x+full-2*even<<"\n";
  }
  return 0;
}