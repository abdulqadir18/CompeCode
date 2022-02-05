#include <bits/stdc++.h>
using namespace std;

bool ispower(int n)
{
  return n&&(!(n&n-1));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int k=0;
  for(int i=n-1; i>=0; i--)
  {
    if(ispower(i))
    {
      k=i;
      break;
    }
  }
  // cout<<k<<"\n";
  int rk=k;
  while(rk--)cout<<rk<<" ";
  for(int i=k; i<n; i++)cout<<i<<" ";
  cout<<"\n";
}

return 0;
}