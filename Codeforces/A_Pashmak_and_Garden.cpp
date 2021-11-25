#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

int d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

if(x1==x2 && y1==y2)
{
  cout<<-1;
}

else if(x1==x2)
{
  if(x1+d>1000 || x2+d>1000)
  {
    if(x1-d<1000 || x2-d<1000)
    {
      cout<<-1;
    }
    else
    {
      cout<<x1-d<<" "<<y1<<" "<<x2-d<<" "<<y2;
    }
  }
  else
  {
    cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
  }
}

else if(y1==y2)
{
  if(y1+d>1000 || y2+d>1000)
  {
    if(y1-d<1000 || y2-d<1000)
    {
      cout<<-1;
    }
    else
    {
      cout<<x1<<" "<<y1-d<<" "<<x2<<" "<<y2-d;
    }
  }
  else
  {
    cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;
  }
}

else
{
  if(abs(x1-x2)!=abs(y1-y2))
  {
    cout<<-1;
  }
  else
  {
    cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
  }
}
return 0;
}