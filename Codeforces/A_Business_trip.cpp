#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int k;
cin>>k;
vector <int> a(12);
for(int i=0; i<12; i++)
{
  cin>>a[i];
}

sort(a.rbegin(),a.rend());
int cnt=0,sum=0;
for(int i=0; i<12; i++)
{
  if(sum>=k)
  {
    break;
  }
  else
  {
    sum+=a[i];
    cnt++;
  }
}

if(sum>=k)
{
  cout<<cnt;
}
else
{
  cout<<-1;
}
return 0;
}