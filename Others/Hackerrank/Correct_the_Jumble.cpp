#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n1,n2;
  cin>>n1>>n2;

  string s1=bitset<32>(n1).to_string();
  string s2=bitset<32>(n2).to_string();

  int cnt=0;
  for(int i=0; i<s2.size(); i++)
  {
    if(s1[i]!=s2[i])
    {
      cnt++;
    }
  }

  cout<<cnt<<"\n";
}

return 0;
}