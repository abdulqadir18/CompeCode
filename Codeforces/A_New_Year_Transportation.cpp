#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,t;
cin>>n>>t;
vector<ll>a(n-1);
for(ll i=0; i<n-1; i++)
{
  cin>>a[i];
}

ll flag=0;
ll i=0;
for(; i<n-1; i+=a[i])
{
  if(i+1==t)
  {
    flag=1;
    break;
  }
}

if(flag==1 || i+1==t)
{
  cout<<"YES";
}
else{
  cout<<"NO";
}

return 0;
}