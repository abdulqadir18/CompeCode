// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 
// long t;
// cin>>t;
// while(t--)
// {
//   long n,x,i;
//   cin>>n>>x;
//   vector <long> a(n);
//   for(i=0; i<n; i++)
//     cin>>a[i];
 
//   i=0;
//   while(true)
//   {
//     if(a[i]%x==0)
//     {
//       // long m=x;
//       // while(m--)
//       //   a.push_back(a[i]/x);
//       a.insert(a.end(),x,a[i]/x);
//     }
//     else
//       break;
//     i++;
//   }
 
//   cout<<accumulate(a.begin(), a.end(), 0)<<"\n";
// }
 
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

typedef long long ll;
ll t;
cin>>t;
while(t--)
{
  ll n,x;
  cin>>n>>x;
  vector <ll> a(n),b(n);

  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
    b[i]=0;
  }

  ll mn=INT_MAX;
  ll mni=-1;
  for(ll i=0; i<n; i++)
  {
    ll m=a[i];
    while(m%2==0 && m>=1)
    {
      m=m/x;
      b[i]++;
    }

    if(mn<b[i])
    {
      mn=b[i];
      mni=i;
    }
  }

  ll sum1=0,sum2=0;
  for(ll i=0; i<n; i++)
  {
    if(i<mni)
    {
      sum2+=a[i];
    }
    sum1+=a[i];
    
  }

  if(mni==0)
  {
    cout<<sum1<<"\n";
  }
  else
  {
    cout<<sum1+sum2<<"\n";
  }


}

return 0;
}
