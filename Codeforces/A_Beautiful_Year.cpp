#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int w=9999;
while(w--)
{
  n++;
  int l=4;
  int m=n;
  vector <int> a;
  int flag=0;
  
  while(l--)
  {

    int f=m%10;
    
    m=m/10;
    for(int i=0; i<a.size();i++)
    {
      if(a[i]==f)
      {
        flag=1;
      }
    }
    a.push_back(f);
  }
  if(flag==0)
  {
    cout<<n;
    break;
  }
}

return 0;
}