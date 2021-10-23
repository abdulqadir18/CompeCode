#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long x,y;
  cin>>x>>y;
  if((x+y)%2==0)
  {
    cout<<(abs(y-x))/2<<"\n";
  }
  else
  {
    cout<<(abs(y-x+1))/2 +1<<"\n";
  }
}

return 0;
}