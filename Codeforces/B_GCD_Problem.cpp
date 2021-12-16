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

  if(n%2==0)
  {
    cout<<(n/2)-1<<" "<<n/2<<" "<<1<<"\n";
  }
  else
  {
    if((n/2)%2==0)
    {
      cout<<(n/2)-1<<" "<<(n/2)+1<<" "<<1<<"\n";
    }
    else
    {
      cout<<(n/2)-2<<" "<<(n/2)+2<<" "<<1<<"\n";
    }
  }
}

return 0;
}