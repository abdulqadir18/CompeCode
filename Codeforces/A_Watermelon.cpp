#include <iostream>
using namespace std;
int main()
{
  long w;
  cin>>w;
  if(w==1 || w==2)
    cout<<"NO";
  else if(w%2==0)
    cout<<"YES";
  else
    cout<<"NO";

  return 0;

}