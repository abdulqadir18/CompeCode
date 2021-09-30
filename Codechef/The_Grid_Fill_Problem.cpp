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
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        if(n&1==1 && i==j)
          cout<<1<<" ";
        else
          cout<<-1<<" ";
      }
      cout<<"\n";
    }
  }
  return 0;
}
