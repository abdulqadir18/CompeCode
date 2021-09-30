#include <iostream>
using namespace std;
int main()
{
  long t;
  cin>>t;
  while(t--)
  {
    long n, *a,i, even, odd;
    cin>>n;
    a= new long[n];
    for(i=0;i<n;i++)
      cin>>a[i];

    if(n%2==0){
      even=n/2;
      odd=n/2;
    }
    if(n%2!=0){
      even=(n-1)/2;
      odd=(n+1)/2;
    }

    for(i=0; i<n;i++)
    {
      if(a[i]%2==0 && odd!=0)
        odd--;
      if(a[i]%2!=0 && even!=0)
        even--;
    }

    cout<<n-even-odd<<"\n";
  }
}