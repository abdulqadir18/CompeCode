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
  ll a, b, p, q;
  cin>>a>>b>>p>>q;
  ll x=p/a;
  ll y=q/b;

  if(p%a!=0 || q%b!=0)
  {
    cout<<"NO\n";
  }

  else if(x==y+1 || x==y-1 || x==y)
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