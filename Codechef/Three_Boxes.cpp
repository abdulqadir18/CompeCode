#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  if(d>=a+b+c)
    cout<<1<<"\n";
  else if(d>=a+b || d>=a+c || d>=b+c)
    cout<<2<<"\n";
  else
    cout<<3<<"\n";
}

return 0;
}