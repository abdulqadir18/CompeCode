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
  ll cnt=0;
  while(n!=1)
  {
    if(n%6==0)
    {
      n=n/6;
      cnt++;
    }
    else if((n*2)%6==0)
    {
      n=n*2;
      cnt++;
    }
    else
    {
      cnt=-1;
      break;
    }
  }

  cout<<cnt<<"\n";
}

return 0;
}