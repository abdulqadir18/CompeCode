#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=-1,y=-1;
    int i,j,a,b,f;

    for(i=0; i<n; i++)
    {
      a=0;
      b=0;
      f=0;
      for(j=i; j<n; j++)
      {
        if(s[j]=='a')
          a++;
        if(s[j]=='b')
          b++;

        if(a==b)
        {
          x=i+1;
          y=j+1;
          f=1;

        }

      }

      if(f==1)
        break;
    }

    
    cout<<x<<" "<<y<<"\n";
  }

  return 0;
}