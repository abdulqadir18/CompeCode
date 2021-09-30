#include <iostream>
using namespace std;
int main()
{
  long t;
  cin>>t;
  while(t--)
  {
    long long n,s;
    cin>>n>>s;
    long long x;
    x=(n*(n+1))/2 -s;

    if(x<1 || x>n)
      x=-1;

    cout<<x<<"\n";
  }
  return 0;
}