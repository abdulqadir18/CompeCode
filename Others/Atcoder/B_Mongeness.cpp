#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int h,w;
cin>>h>>w;
int** a = new int*[h];
for(int i=0; i<h; i++)
{
  a[i] = new int[w];
}

for(int i=0; i<h; i++)
{
  for(int j=0; j<w; j++)
  {
    cin>>a[i][j];
  }
}

for(int i=0; i<h-1; i++)
{
  for(int j=0; j<w-1; j++)
  {
    if(a[i][j]+a[i+1][j+1]>a[i][j+1]+a[i+1][j])
    {
      cout<<"No";
      return 0;
    }
  }
}
cout<<"Yes";
return 0;
}