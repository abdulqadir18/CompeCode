#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m,a,b;
cin>>n>>m>>a>>b;

int x=((n/m)*b)+((n%m)*a);
int y=n*a;
int z;
if(n%m==0)
{
  z=(n/m)*b;
}
else
{
  z=((n/m))*b+b;
}
cout<<min(x,min(y,z));

return 0;
}