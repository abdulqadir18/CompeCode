#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long n,x,i;
  cin>>n>>x;
  vector <long> a(n);
  for(i=0; i<n; i++)
    cin>>a[i];

  i=0;
  while(true)
  {
    if(a[i]%x==0)
    {
      // long m=x;
      // while(m--)
      //   a.push_back(a[i]/x);
      a.insert(a.end(),x,a[i]/x);
    }
    else
      break;
    i++;
  }

  cout<<accumulate(a.begin(), a.end(), 0)<<"\n";
}

return 0;
}


