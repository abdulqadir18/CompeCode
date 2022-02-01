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
  ll n,k;
  cin>>n>>k;
  if(k==1)
  {
    cout<<1<<"\n";
  }
  else if(n==1)
  {
    cout<<k<<"\n";
  }
  else if(n>k)
  {
    cout<<((n%k==0)?n/k:n/k+1)<<"\n";
  }
  else
  {
    cout<<((k%n==0)?k/n:k/n+1)<<"\n";
  }
}

return 0;
}