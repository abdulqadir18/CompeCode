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
  ll n,x;
  cin>>n>>x;

  if(n%x==0)
  {
    cout<<0<<"\n";
  }
  else
  {
    cout<<x-(n%x)<<"\n";
  }
}

return 0;
}