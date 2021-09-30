#include <iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string a;
  int i, j, l=a.size();

  for(i=0; i<s.size(); i++)
  {
    int flag=0;
    for(j=0; j<l; j++)
    {
      if(a[j]==s[i])
      {
        flag=1;
        break;
      }
    }

    if(flag==0)
    {
      l++;
      a[l-1]=s[i];
    }
  }

  if(l%2==0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
  return 0;
}