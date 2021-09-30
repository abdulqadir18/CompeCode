#include <iostream>
using namespace std;
int main()
{
  int f1[3],f2[3],f3[3];
  for(int i=0;i<3;i++)
  {
    cin>>f1[i]>>f2[i]>>f3[i];
  }
  int s1=0,s2=0,s3=0;
  for(int i=0;i<3;i++)
  {
    s1+=f1[i];
    s2+=f2[i];
    s3+=f3[i];
  }

  if(s1==0 && s2==0 && s3==0)
    cout<<"YES";
  else
    cout<<"NO";
}