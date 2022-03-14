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
  ll n;
  cin>>n;
  if(n%10==9) cout<<(n/10)+1<<"\n";
  else cout<<(n/10)<<"\n";
}

return 0;
}