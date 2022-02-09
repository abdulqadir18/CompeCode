#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int>speed(n),ram(n),hdd(n),cost(n);
for(int i=0; i<n; i++)
{
  cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
}

int min=INT_MAX, ans=-1;
for(int i=0; i<n; i++)
{
  int flag=0;
  for(int j=0; j<n; j++)
  {
    if(speed[i]<speed[j] && ram[i]<ram[j] && hdd[i]<hdd[j])
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    if(min>cost[i])
    {
      min=cost[i];
      ans=i+1;
    }
  }
}
cout<<ans;
return 0;
}