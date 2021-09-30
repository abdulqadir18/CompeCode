#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin>>a>>b;
  
  int n=a*b;
  (n%2==0)?(cout<<n/2):(cout<<(n-1)/2);
  return 0;
}