#include <iostream>
using namespace std;
int main()
{
  long k,w,n;
  cin>>k>>w>>n;
  long c= ((n*(n+1))/2)*k;

  if(c>w)
    cout<<c-w;
  else
    cout<<0;
  return 0;
}