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
  if(n&&(!(n&(n-1))))
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
  }
}

return 0;
}