#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
int x1=n,x2=n,max=0;
for(int i=0; i<=2*n+1; i++)
{
  int current=0;
  for(int j=0; j<=x2; j++)
  {
    if(j>=x1 && j<=x2)
    {
      if(j==x2)
      {
        cout<<current;
      }
      else
      {
        cout<<current<<" ";
      }
      if(j>=n)
      {
        current--;
      }
      else
      {
        current++;
      }
    }
    else
    {
      cout<<"  ";
    }
  }
  
  if(i<n)
  {
    x1--;
    x2++;
    max++;
  }
  else
  {
    x1++;
    x2--;
    max--;
  }
  cout<<"\n";
}

return 0;
}