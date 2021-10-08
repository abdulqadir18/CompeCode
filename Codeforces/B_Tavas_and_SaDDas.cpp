#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long n;
cin>>n;

int flag=0;
long i,cnt=1;
for( i=1; i<=n;i++)
{
  flag=0;
  long j=i;
  while(j!=0)
  {
    flag==0;
    if(j%10!=4 && j%10!=7){
      flag==1;
      break;
    }
    j=j/10;
  }
  if(flag==0)
    cnt++;
}

cout<<cnt;

return 0;
}