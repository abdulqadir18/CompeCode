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
  ll x=(n-1)/2;
  cout<<(8*x*(x+1)*(2*x+1))/6<<"\n";
}

return 0;
}