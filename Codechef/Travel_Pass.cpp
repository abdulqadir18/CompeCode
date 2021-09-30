#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
      if(s[i]=='0')
        cnt+=a;
      if(s[i]=='1')
        cnt+=b;
    }
    cout<<cnt<<endl;
  }
  return 0;
}