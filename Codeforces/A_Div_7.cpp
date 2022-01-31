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
  ll x=n%7;
  ll y=n%10;
  if(x>y)
  {
    cout<<n+7-x<<"\n";
  }
  else
  {
    cout<<n-x<<"\n";
  }
}

return 0;
}