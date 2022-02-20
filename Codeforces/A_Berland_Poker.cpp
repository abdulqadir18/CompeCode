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
  ll n,m,k;
  cin>>n>>m>>k;
  n=n/k;
  ll x=min(n,m), y=0;
  m-=x, n--, k--;
  if(m%k==0) y=m/k;
  else y=(m/k)+1;
  cout<<x-y<<"\n";
}

return 0;
}