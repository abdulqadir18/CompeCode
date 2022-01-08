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
  map<int,int>m;
  vector<int>a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    m[a[i]]=0;
  }

  int cnt=0,flag=1;
  for(int i=0; i<n; i++)
  {
    if(a[i]==0)
    {
      flag=0;
    }
    if(m[a[i]]==0)
    {
      m[a[i]]=1;
      m[-a[i]]=1;
    }
    else if(m[a[i]]==1)
    {
      m[a[i]]=2;
      m[-a[i]]=2;
      cnt++;
    }
  }

  if(flag==0)
  {
    cout<<(m.size())/2+cnt+1<<"\n";
  }
  else
  {
    cout<<m.size()/2+cnt<<"\n";
  }
}

//   int n;
//   cin>>n;
//   vector<int>a(n);
//   for(int i=0; i<n; i++)
//   {
//     cin>>a[i];
//     if(a[i]<0)
//     {
//       a[i]=-a[i];
//     }
//   }
//   sort(a.begin(),a.end());

//   int cmp=a[0],cnt=0,sum=0;
//   for(int i=0; i<n; i++)
//   {
//     if(a[i]==cmp)
//     {
//       cnt++;
//     }
//     else
//     {
//       if(cnt==1)
//       {
//         sum++;
//       }
//       else if(cnt>=2 && a[i-1]!=0)
//       {
//         sum+=2;
//       }
//       else
//       {
//         sum++;
//       }
//       cnt=1;
//     }
//   }
//   if(cnt==1)
//   {
//     sum++;
//   }
//   else if(cnt>=2 && a[n-1]!=0)
//   {
//     sum+=2;
//   }
//   else
//   {
//     sum++;
//   }
//   cnt=1;
//   cout<<sum<<"\n";
// }


return 0;
}