#include <bits/stdc++.h>
using namespace std;

void rev(int *a)
{
  if(*a==0)
  {
    *a=1;
  }
  else
  {
    *a=0;
  }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a[3][3],x[3][3];
for(int i=0; i<3; i++)
{
  for(int j=0; j<3; j++)
  {
    cin>>a[i][j];
    x[i][j]=1;
  }
}

for(int i=0; i<3; i++)
{
  for(int j=0; j<3; j++)
  {
    if(a[i][j]%2 !=0)
    {
      rev(&x[i][j]);
      if(i+1<3)
      {
        rev(&x[i+1][j]);
      }
      if(i-1>=0)
      {
        rev(&x[i-1][j]);
      }
      if(j+1<3)
      {
        rev(&x[i][j+1]);
      }
      if(j-1>=0)
      {
        rev(&x[i][j-1]);
      }
    }
  }
}

for(int i=0; i<3; i++)
{
  for(int j=0; j<3; j++)
  {
    cout<<x[i][j];
  }
  cout<<"\n";
}
return 0;
}

