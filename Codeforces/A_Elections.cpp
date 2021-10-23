#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long a[3];
  for(int i=0; i<3; i++)
  {
    cin>>a[i];
  }

  long mx=INT_MIN;
  for(int i=0; i<3; i++)
  {
    mx=max(mx,a[i]);
  }

  if(a[0]==a[1] && a[1]== a[2])
  {
    cout<<1<<" "<<1<<" "<<1;
  }

  else if((a[0]==a[1] && a[0]==mx) || (a[1]==a[2] && a[1]==mx) || (a[2]==a[0] && a[2]==mx))
  {
    for(int i=0; i<3; i++)
    {
      if(a[i]==mx)
      {
        cout<<1<<" ";
      }
      else
      {
        cout<<mx-a[i]+1<<" ";
      }
    }
  }

  else
  {
    for(int i=0; i<3; i++)
    {
      if(a[i]==mx)
      {
        cout<<0<<" ";
      }
      else
      {
        cout<<mx-a[i]+1<<" ";
      }
    }
  }

  cout<<"\n";
}

return 0;
}