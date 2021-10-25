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
  int n;
  cin>>n;
  vector <int> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  int cnt=0;
  for(int i=0; i<n; i++)
  {
    int boast=0, notboast=0;
    for(int j=0; j<n; j++)
    {
      if(i==j)
      {
        continue;
      }
      else if(a[j]>a[i])
      {
        notboast++;
      }
      else
      {
        boast++;
      }
    }

    if(boast>=notboast)
    {
      cnt++;
    }
  }

  cout<<cnt<<"\n";
}

return 0;
}