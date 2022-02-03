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
  ll a,b,k;
  cin>>a>>b>>k;
  if(a==b)
  {
    (a>1)?cout<<"YES\n":cout<<"NO\n";
  }
  else
  {
    ll x;
    (a%2!=0 && b%2!=0)?x=(b-a+1)/2+1:x=(b-a+1)/2;
    (k>=x)?cout<<"YES\n":cout<<"NO\n";
  }
}

return 0;
}