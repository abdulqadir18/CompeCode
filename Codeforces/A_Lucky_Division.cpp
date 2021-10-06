#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int flag=0,i;
for( i=1; i<=n;i++)
{
  flag=0;
  int j=i;
  while(j!=0)
  {
    if(j%10!=4 && j%10!=7){
      flag=1;
      break;
    }
    j=j/10;
  }

  if(flag==0)
  {
    if(n%i==0){
      cout<<"YES";
      break;
      }
  }

}
if(flag==1)
   cout<<"NO"; 

return 0;
}