#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int a,b,c;
  cin>>a>>b>>c;
  int maxi=0;
  if(a>=b && a>=c)
    maxi=a;
  else if(b>=a && b>=c)
    maxi=b;
  else
    maxi=c;

  if(a==b && b==c)
    cout<<1<<" "<<1<<" "<<1<<"\n";

  else
  {
    (a==maxi)?cout<<0<<" ":cout<<maxi-a+1<<" ";
    (b==maxi)?cout<<0<<" ":cout<<maxi-b+1<<" ";
    (c==maxi)?cout<<0<<" ":cout<<maxi-c+1<<" ";
    cout<<"\n";
  }
}

return 0;
}