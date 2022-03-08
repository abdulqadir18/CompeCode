#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{

ll t;
cin>>t;
while(t--)
{
  ll l,r,a;
  cin>>l>>r>>a;
  if(l==r) cout<<r/a + r%a<<"\n";
  else if(a==1) cout<<r<<"\n";
  else if(r==a) cout<<a-1<<"\n";
  else if(r<a) cout<<r<<"\n";
  else
  {
    ll x=0;
    (r%a==0)?x=r-1:x=r;
    ll last=(x/a)-1+a-1;
    ll that=((x/a)-1)*a +a-1;
    if(that>=l && that<=r) cout<<max(last, x/a + x%a)<<"\n";
    else cout<<x/a + x%a<<"\n";
  }
}

return 0;
}