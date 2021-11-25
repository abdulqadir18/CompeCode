#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

vector <int> t1,t2,t3;
for(int i=0; i<n; i++)
{
  if(a[i]==1)
  {
    t1.push_back(i+1);
  }
  else if(a[i]==2)
  {
    t2.push_back(i+1);
  }
  else if(a[i]==3)
  {
    t3.push_back(i+1);
  }
}

if(t1.size()!=0 && t2.size()!=0 && t3.size()!=0)
{
  int mn=min(t1.size(),min(t2.size(),t3.size()));
  cout<<mn<<"\n";
  for(int i=0; i<mn; i++)
  {
    cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<"\n";
  }
}
else
{
  cout<<0;
}

return 0;
}