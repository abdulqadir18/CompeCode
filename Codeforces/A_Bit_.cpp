#include <iostream>
using namespace std;
int main()
{
  int n, cnt=0;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    for(int i=0; i<3; i++)
    {
      if(s[i]=='+'){
        cnt++;
        break;
      }
      if(s[i]=='-'){
        cnt--;
        break;
      }
    }
  }
  cout<<cnt<<"\n";
  return 0;
}