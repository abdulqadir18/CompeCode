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
  if(n%3==1) cout<<(n/3)+1<<" "<<(n/3)<<"\n";
  else if(n%3==2) cout<<(n/3)<<" "<<(n/3)+1<<"\n";
  else cout<<(n/3)<<" "<<(n/3)<<"\n";
}

return 0;
}