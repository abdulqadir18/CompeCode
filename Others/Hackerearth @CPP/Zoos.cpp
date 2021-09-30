#include <iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int zcount=0, ocount=0;
  for(int i=0; i< s.size(); i++)
  {
    if(s[i]=='z')
      zcount++;
    if(s[i]=='o')
      ocount++;
  }
  
  if(ocount==2*zcount)
    cout<<"Yes";
  else
    cout<<"No";
  return 0;
}