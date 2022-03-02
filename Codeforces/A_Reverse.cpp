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
  vector<int>a(n);
  for(int i=0; i<n; i++) cin>>a[i];

  int tofound=0;
  int toindex=0;
  for(int i=0; i<n; i++)
  {
    if(a[i]!=i+1)
    {
      tofound=i+1;
      toindex=i;
      break;
    }
  }

  for(int i=toindex+1; i<n; i++)
  {
    if(tofound==a[i])
    {
      reverse(a.begin()+toindex, a.begin()+i+1);
      break;
    }
  }

  for(int i=0; i<n; i++) cout<<a[i]<<" ";
  cout<<"\n";
}

return 0;
}