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
  ll a,b,c;
  cin>>a>>b>>c;

  if(a==1 || b==1 || c==1)
  {
    if(a==1 && b==1 && c==1)
    {
      cout<<"YES\n";
    }
    else if(a==1 && c==1)
    {
      cout<<"YES\n";
    }
    else if(a==1 && b==1)
    {
      if(c%2==0)
      {
        cout<<"NO\n";
      }
      else
      {
        cout<<"YES\n";
      }
    
    }
    else if(c==1 && b==1)
    {
      if(a%2==0)
      {
        cout<<"NO\n";
      }
      else
      {
        cout<<"YES\n";
      }
    
    }
    else if(b==1)
    {
      if((a+c)%2==0)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
    else if(a==1)
    {
      if(b-a>=c-b)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
    else if(c==1)
    {
      if(b-a<=c-b)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
  }

  else if((a+c)%(2*b)==0 || (2*b-c)%a==0 || (2*b-a)%c==0)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
}

return 0;
}