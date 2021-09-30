#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int cnt=0, max=0;
while(n--)
{
  int a,b;
  cin>>a>>b;
  cnt=cnt-a+b;
  if(cnt>max)
    max=cnt;
}
cout<<max;

return 0;
}