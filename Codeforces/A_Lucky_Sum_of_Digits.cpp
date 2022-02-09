#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
ll x=-1,y=0;
ll min=INT_MAX;
ll i=0;
while(n>=7*i)
{
  if((n-7*i)%4==0)
  {
    if(min>((n-7*i)/4)+i) 
    {
      x=(n-7*i)/4;
      y=i;
      min=x+i;
    }
  }
  i++;
}

if(x==-1) cout<<x;
else
{
  while(x--)cout<<4;
  while(y--)cout<<7;
}

return 0;
}