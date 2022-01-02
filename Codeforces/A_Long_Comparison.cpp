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
  ll x1,p1,x2,p2;
  cin>>x1>>p1>>x2>>p2;
  ll q1=floor(log10(x1)+1);
  ll q2=floor(log10(x2)+1);

  if(q1+p1>q2+p2)
  {
    cout<<">\n";
  }
  else if(q1+p1<q2+p2)
  {
    cout<<"<\n";
  }
  else
  {
    if(q1>q2)
    {
      x2=x2*pow(10,q1-q2);
    }
    else if(q1<q2)
    {
      x1=x1*pow(10,q2-q1);
    }

    if(x1>x2)
    {
      cout<<">\n";
    }
    else if(x1<x2)
    {
      cout<<"<\n";
    }
    else
    {
      cout<<"=\n";
    }
  }
}

return 0;
}