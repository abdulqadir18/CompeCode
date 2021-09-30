#include <iostream>
using namespace std;
int main()
{
  string s1, s2;
  cin>>s1;
  cin>>s2;
  
  for(int i=0; i<s1.size(); i++)
  {
    s1[i]= towlower(s1[i]);
    s2[i]= towlower(s2[i]);
  }

  int x= s1.compare(s2);

  if(x==0)
    cout<<"0\n";
  else if(x<0)
    cout<<"-1\n";
  else
    cout<<"1\n";
  return 0;
}