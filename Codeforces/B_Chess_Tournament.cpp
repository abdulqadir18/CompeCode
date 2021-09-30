#include <iostream>
using namespace std;

void matrex(string s, string a )
{
  int n=s.size();
  int l=a.size();
  for(int i=0; i<n; i++)

}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s,a;
    cin>>s;
    int i, j, c1=0, c2=0, k=0;
    for(i=0; i<s.size(); i++)
    {
      if(s[i]==1)
        c1++;
      if(s[i]==2)
      {
        c2++;
        a[k]=i;
        k++;
      }
    }

    if(c2>2)
    {
      cout<<"YES\n";
      matrex(s,a);
    }
    else
      cout<<"NO\n";
  }
  return 0;
}