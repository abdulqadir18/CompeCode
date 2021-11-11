// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// typedef long long ll;

// ll t;
// cin>>t;
// while(t--)
// {
//   ll n;
//   cin>>n;
//   vector <ll> a(n);
//   for(int i=0; i<n; i++)
//   {
//     cin>>a[i];
//   }
//   vector <ll> x(pow(10,6),0);
//   vector <ll> h;
//   vector <ll> t;
//   ll tag=0;
//   ll mx=INT_MIN;
//   for(int i=0; i<n; i++)
//   {
//     mx=max(mx,a[i]);
//     x[a[i]]++;
//     if(x[a[i]]==1)
//     {
//       t.push_back(a[i]);
//     }
//     if(x[a[i]]==2)
//     {
//       h.push_back(a[i]);
//     }
//     if(x[a[i]]>2 || x[mx]>=2)
//     {
//       tag=-1;
//       break;
//     }  
    
//   }

//   if(tag==-1)
//   {
//     cout<<-1<<"\n";
//   }
//   else
//   {
//     sort(h.begin(),h.end());
//     sort(t.begin(),t.end(),greater<ll>());

//     copy(h.begin(),h.end(),ostream_iterator<int>(cout, " "));
//     copy(t.begin(),t.end(),ostream_iterator<int>(cout, " "));
//     cout<<"\n";
//   }
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
  ll n;
  cin>>n;
  vector <ll> a(n);
  map <ll, ll> x;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    x[a[i]]=0;
  }
  
  vector <ll> h;
  vector <ll> t;
  ll tag=0;
  ll mx=INT_MIN;
  for(int i=0; i<n; i++)
  {
    mx=max(mx,a[i]);
    x[a[i]]++;
    if(x[a[i]]==1)
    {
      t.push_back(a[i]);
    }
    if(x[a[i]]==2)
    {
      h.push_back(a[i]);
    }
    if(x[a[i]]>2)
    {
      tag=-1;
      break;
    }  
    
  }

  if(tag==-1 || x[mx]>=2)
  {
    cout<<-1<<"\n";
  }
  else
  {
    sort(h.begin(),h.end());
    sort(t.begin(),t.end(),greater<ll>());

    copy(h.begin(),h.end(),ostream_iterator<int>(cout, " "));
    copy(t.begin(),t.end(),ostream_iterator<int>(cout, " "));
    cout<<"\n";
  }
}

return 0;
}