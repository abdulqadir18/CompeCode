#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt=0;
  for(int i=0; i<n; i++)
  {
    int current = s[i];
    if(current==s[i-1] && i!=0)
      cnt++;
  }
  cout<<cnt;
  return 0;
}