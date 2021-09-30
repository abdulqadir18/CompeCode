#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int k=0;
  while(a<=b)
  {
    a=3*a;
    b=2*b;
    k++;
  }
  cout<<k;
  return 0;
}