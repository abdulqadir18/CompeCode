#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i< s.size();i++)
    {
      if(s[i]=='U')
        cout<<"D";
      if(s[i]=='D')
        cout<<"U";
      if(s[i]=='L')
        cout<<"L";
      if(s[i]=='R')
        cout<<"R";
    }
    cout<<endl;

  }
  return 0;
}