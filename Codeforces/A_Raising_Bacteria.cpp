#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;

ll ans=0;
while(n)
{
  n&=(n-1);
  ans++;
}

cout<<ans;

return 0;
}