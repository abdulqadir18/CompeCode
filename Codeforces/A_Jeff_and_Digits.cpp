#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector <int> a(n);
int n0=0,n5=0;
for(int i=0; i<n; i++)
{
  cin>>a[i];
  if(a[i]==5)
  {
    n5++;
  }
  else
  {
    n0++;
  }
}

if(n0==0)
{
  cout<<-1;
}
else if(n5<9)
{
  cout<<0;
}
else
{
  int x=9*(n5/9);
  while(x--)
  {
    cout<<5;
  }
  while(n0--)
  {
    cout<<0;
  }
}


return 0;
}