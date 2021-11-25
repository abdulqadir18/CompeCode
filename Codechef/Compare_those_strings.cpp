#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  int cnt=0;
  if(a[n-1]>b[n-1])
  {
    cout<<cnt<<"\n";
  }
  
  else
  {
    for(int i=n-2; i>=0; i--)
    {
      for(int j=i; j<n-1; j++)
      {
        if(a[i]>b[i])
        {
          break;
        }
        else
        {
          cnt++;
        }
      }
    }
  }
  cout<<cnt<<"\n";
}


return 0;
}