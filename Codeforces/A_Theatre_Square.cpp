#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll m,n,a;
cin>>m>>n>>a;
ll x,y;
if(m%a==0)
{
  x=m/a;
}
else
{
  x=(m/a)+1;
}
if(n%a==0)
{
  y=n/a;
}
else
{
  y=(n/a)+1;
}

cout<<x*y;

return 0;
}