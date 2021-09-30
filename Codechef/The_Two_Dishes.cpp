#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void func(long n, long s, long max);

int main()
{
  long t;
  cin>>t;
  while(t--)
  {
    long n,s;
    cin>>n>>s;
    long max=0;
    func(n,s,max);
  }
  return 0;
}

void func(long n, long s, long max)
{
  long low=0, high=n;
  while(low<high)
  {
    if(low+high==s)
    {
      if(max<abs(low-high))
        max=abs(low-high);
    }

    (low+high<s)?low++:high--;
  }
  cout<<max<<"\n";  
}