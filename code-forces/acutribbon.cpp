#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
  int n,cont=1,i,cut=0,total=0,remaing=0,temp=0,p;
  int a[3];
  cin>>n>>a[0]>>a[1]>>a[2];
  total=n;
  sort(a,a+3);
for(int j=0;j<3;j++)
{
  if(n%a[j]==0)
    {
      temp=n/a[j];
      break;

    }
}
  while(cont)
  {

    for( i=0;i<3;i++)
    {
        remaing=total-a[i];
        if(remaing==a[0] || remaing==a[1] || remaing==a[2])
        {
          cut++;
          total=remaing;
          break;
          cont=1;
        }

    }
    if(i==3)
      cont=0;
  }
//cout<<cut<<"\t"<<p<<endl;
  p= temp>=cut+1?temp:cut+1;
  cout<<p<<endl;
  return 0;
}
