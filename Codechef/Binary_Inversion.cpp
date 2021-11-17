// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// int t;
// cin>>t;
// while(t--)
// {
//   int n,m;
//   cin>>n>>m;
//   vector <string> v(n);
//   for(int i=0; i<n; i++)
//   {
//     cin>>v[i];
//   }

//   sort(v.begin(),v.end());
//   string s;
//   for(int i=0; i<n; i++)
//   {
//     s.append(v[i]);
//   }
  

//   int cnt=0;
//   for(int i=0; i<(n*m)-1; i++)
//   {
//     if(s[i]=='1')
//     {
//       for(int j=i+1; j<n*m; j++)
//       {
//         if(s[j]=='0')
//         {
//           cnt++;
//         }
//       }
//     }
//   }

//   cout<<cnt<<"\n";

// }


// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// int t;
// cin>>t;
// while(t--)
// {
//   int n,m;
//   cin>>n>>m;
//   vector <string> v(n);
//   for(int i=0; i<n; i++)
//   {
//     cin>>v[i];
//   }

//   sort(v.begin(),v.end());
//   string s;
//   for(int i=0; i<n; i++)
//   {
//     s.append(v[i]);
//   }
  

//   int cnt=0;
//   int sum=0;
//   vector <int> x(n*m,0);
//   for(int i=(n*m)-1; i>=0; i--)
//   {
//     if(s[i]=='0')
//     {
//       cnt++;
//     }
    
//     else
//     {
//       sum+=cnt;
//     }
//   }

//   cout<<sum<<"\n";

// }


// return 0;
// }
