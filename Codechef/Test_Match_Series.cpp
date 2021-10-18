#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int a[5],i;
  int ind=0, eng=0;

  for(i=0; i<5; i++)
  {
    cin>>a[i];
  }

  for(i=0; i<5; i++)
  {
    if(a[i]==1)
      ind++;
    if(a[i]==2)
      eng++;
  }

  if(ind>eng)
    cout<<"INDIA\n";
  else if(ind<eng)
    cout<<"ENGLAND\n";
  else
    cout<<"DRAW\n"; 
}

return 0;
}