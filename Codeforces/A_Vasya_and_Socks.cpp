#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;

int i=1;
while(n!=0)
{
  n--;
  if(i%m==0)
  {
    n++;
  }
  i++;
}
cout<<i-1;

return 0;
}