#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int s,n;
cin>>s>>n;
vector <int> dragon(n),bonus(n);
for(int i=0; i<n; i++)
{
  cin>>dragon[i]>>bonus[i];
}

while(dragon.size()!=0)
{
  int x=-1;
  int index;
  for(int i=0; i<dragon.size(); i++)
  {
    if(s>dragon[i])
    {
      if(x<bonus[i])
      {
        x=bonus[i];
        index=i;
      }
    }
  }

  if(x==-1)
  {
    cout<<"NO";
    return 0;
  }
  else
  {
    s+=x;
    dragon.erase(dragon.begin()+index);
    bonus.erase(bonus.begin()+index);
  }
}

cout<<"YES";

return 0;
}