#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;
int a1,a2,a3,b1,b2,b3;
int x=pow(m,2)-n;
b1=x,b2=x-1,b3=x+1;
a1=m-pow(b1,2);
a2=m-pow(b2,2);
a3=m-pow(b3,2);

int cnt=0;
if(a1>=0 && b1>=0)
{
  cnt++;
}
else if(a2>=0 && b2>=0)
{
  cnt++;
}
else if(a3>=0 && b3>=0)
{
  cnt++;
}

cout<<cnt;

return 0;
}