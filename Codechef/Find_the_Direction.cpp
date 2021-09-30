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

    if(n==1 || n%4==1)
      cout<<"East\n";
    if(n==2 || n%4==2)
      cout<<"South\n";
    if(n==3 || n%4==3)
      cout<<"West\n";
    if(n==4 || n%4==0)
      cout<<"North\n";
  }
  return 0;
}