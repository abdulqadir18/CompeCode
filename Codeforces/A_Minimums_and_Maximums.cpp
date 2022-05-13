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
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1>=l2 && l1<=r2) cout<<max(l1,l2)<<"\n";
    else if(l2>=l1 && l2<=r1) cout<<max(l1,l2)<<"\n";
    else cout<<l1+l2<<"\n";
  }
  return 0;
}