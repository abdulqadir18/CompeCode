#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,b;
cin>>n>>b;
ll ans=0;
ll add=0;
while(n-add!=0)
{
  ans+=(n-add);
  add=n%b;
  n/=b;
  n+=add;
  // cout<<n<<" ";
}
cout<<ans;
return 0;
}