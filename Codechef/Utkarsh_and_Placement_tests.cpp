#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  char a[3];
  for(int i=0; i<3; i++)
  {
    cin>>a[i];
  }
  
  char x,y;
  cin>>x>>y;

  for(int i=0; i<3; i++)
  {
    if(x==a[i] || y==a[i])
    {
      cout<<a[i]<<"\n";
      break;
    }
    
  }
}

return 0;
}