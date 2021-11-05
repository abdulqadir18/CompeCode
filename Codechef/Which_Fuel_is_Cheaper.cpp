#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
while(n--)
{
  int x,y,a,b,k;
  cin>>x>>y>>a>>b>>k;
  int p=x+(a*k);
  int d=y+(b*k);

  if(p>d)
  {
    cout<<"DIESEL\n";
  }
  else if(p<d)
  {
    cout<<"PETROL\n";
  }
  else
  {
    cout<<"SAME PRICE\n";
  }

}

return 0;
}