#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
for(int i=0; i<n; i++)
{
  if(a[i]==1) cnt1++;
  else if(a[i]==2) cnt2++;
  else if(a[i]==3) cnt3++;
  else cnt4++;
}

int cnt=cnt4+cnt3;
if(cnt3<=cnt1)
{
  cnt1=cnt1-cnt3;
}
else
{
  cnt1=0;
}

cnt2*=2;
if(cnt1+cnt2>0)
{
  if(cnt1+cnt2<=4)
  {
    cnt+=1;
  }
  else if((cnt1+cnt2)%4==0)
  {
    cnt+=((cnt1+cnt2)/4);
  }
  else
  {
    cnt+=((cnt1+cnt2)/4 +1);
  }
}

cout<<cnt;

return 0;
}