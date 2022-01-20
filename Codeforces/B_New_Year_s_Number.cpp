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
  if((n%2020)<=(n/2020) && n>2019)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
}

return 0;
}