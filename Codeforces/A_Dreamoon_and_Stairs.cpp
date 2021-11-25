#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;

int ans=0;
if(n%2==0)
{
  ans=(n/2);
  (n<m)?cout<<-1:(ans%m==0)?cout<<ans:cout<<ans+m-(ans+m)%m;
}
else
{
  ans=(n+1)/2;
  (n<m)?cout<<-1:(ans%m==0)?cout<<ans:cout<<ans+m-(ans+m)%m;
}

return 0;
}