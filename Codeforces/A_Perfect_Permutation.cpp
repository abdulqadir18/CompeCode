#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

if(n%2!=0)
{
  cout<<-1;
  return 0;
}

int i=2;
while(n--)
{
  cout<<i<<" ";
  if(i%2!=0)
  {
    i=i+3;
  }
  else
  {
    i=i-1;
  }
}

return 0;
}