#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  long t;
  cin>>t;

  while(t--){
    long a,b,c;
    cin>>a>>b>>c;
    long diff= abs(a-b);

    //for d1
    long d1=c+diff, d2=c-diff;
    if(d1<1 || d1==a || d1==b)
      d1=-1;
    if(2*diff<a || 2*diff<b || 2*diff<c || 2*diff<d1)
      d1=-1;

    if(d1==-1){
      if(d2<1 || d2==a || d2==b)
        d2=-1;
      if(2*diff<a || 2*diff<b || 2*diff<c || 2*diff<d2)
        d2=-1;
      cout<<d2<<endl;
    }

    if(d1!=-1)
      cout<<d1<<endl;
  }
  return 0;
}
