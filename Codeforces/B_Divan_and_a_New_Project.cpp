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
  int n;
  cin>>n;
  vector <string> s(n);
  vector <int> a(n);
  map <string,int> in;
  string x="a";
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    s[i]=x+'a';
    x+=s[i];
    cout<<s[i]<<" ";
    in.insert(pair<string,int>(s[i],i));
  }
}

return 0;
}