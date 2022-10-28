#include<iostream>
#include <vector>
using namespace std;
int absf(int a)
{
  return a>0?a:-a;
}
int main()
{
  int k=0,i,j,p=0;
  for( i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        cin>>k;
        if(k==1)
          {
            p=1;
            break;
          }
      }
      if(p==1)
        break;
    }
    cout<<absf(i-2)+absf(j-2);


}
