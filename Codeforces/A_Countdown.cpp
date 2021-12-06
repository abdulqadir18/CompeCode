#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
 
  ll cnt=0;
  for(ll i=0; i<n; i++)
  {
    int x=s[i]-48;
    if(x!=0)
    {
      if(i==n-1)
      {
        cnt+=x;
      }
      else
      {
        cnt=cnt+x+1;
      }
    }
  }
  cout<<cnt<<"\n";
}

return 0;
}