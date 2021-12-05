#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
if(n==0)
{
  cout<<0<<" "<<0<<" "<<0;
}
else if(n==1)
{
  cout<<0<<" "<<0<<" "<<1;
}
else if(n==2)
{
  cout<<0<<" "<<1<<" "<<1;
}
else if(n==3)
{
  cout<<1<<" "<<1<<" "<<1;
}
else
{
  ll n1=0;
  ll n2=1;
  ll n3=1;
  while(n3!=n)
  {
    n3=n2+n1;
    n1=n2;
    n2=n3;
    
  }
  cout<<2*n2-3*n1<<" "<<2*n1-n2<<" "<<n1;
}

return 0;
}