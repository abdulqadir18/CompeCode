#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,a,b;
cin>>n>>a>>b;
if(n-a<=b)
{
  cout<<n-a;
}
else
{
  cout<<b+1;
}

return 0;
}