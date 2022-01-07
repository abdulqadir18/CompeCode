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
  ll n,m,rb,cb,rd,cd;
  cin>>n>>m>>rb>>cb>>rd>>cd;

  ll r,c;
  (rd<rb)?r=(n-rb)+(n-rd):r=rd-rb;
  (cd<cb)?c=(m-cb)+(m-cd):c=cd-cb;

  cout<<min(r,c)<<"\n";
}

return 0;
}