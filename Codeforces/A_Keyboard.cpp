#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string pos,s;
cin>>pos>>s;

string s1="qwertyuiop", s2="asdfghjkl;", s3="zxcvbnm,./";

if(pos=="R")
{
  for(int i=0; i<s.size(); i++)
  {
    for(int j1=0; j1<s1.size(); j1++)
    {
      if(s[i]==s1[j1])
      {
        cout<<s1[j1-1];
      }
    }
    for(int j2=0; j2<s2.size(); j2++)
    {
      if(s[i]==s2[j2])
      {
        cout<<s2[j2-1];
      }
    }
    for(int j3=0; j3<s3.size(); j3++)
    {
      if(s[i]==s3[j3])
      {
        cout<<s3[j3-1];
      }
    }
  }
}

else
{
  for(int i=0; i<s.size(); i++)
  {
    for(int j1=0; j1<s1.size(); j1++)
    {
      if(s[i]==s1[j1])
      {
        cout<<s1[j1+1];
      }
    }
    for(int j2=0; j2<s2.size(); j2++)
    {
      if(s[i]==s2[j2])
      {
        cout<<s2[j2+1];
      }
    }
    for(int j3=0; j3<s3.size(); j3++)
    {
      if(s[i]==s3[j3])
      {
        cout<<s3[j3+1];
      }
    }
  }
}
return 0;
}