#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
ll cnt=0;
while(n!=0)
{
  if(n%10==4 || n%10==7)
  {
    cnt++;
  }
  n=n/10;
}

if(cnt==0)
{
  cout<<"NO";
  return 0;
}

while(cnt!=0)
{
  if(cnt%10!=4 && cnt%10!=7)
  {
    cout<<"NO";
    return 0;
  }
  cnt=cnt/10;
}

cout<<"YES";

return 0;
}