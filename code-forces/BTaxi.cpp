#include <iostream>
using namespace std;
int main()
{
  static int a[4];
  int n,mintaxi;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    a[k-1]+=1;
  }
  mintaxi=a[3];
  //cout<<mintaxi;
  if(a[2]>=a[0])
  {
    mintaxi+=a[2];
    a[0]=0;

  }
  else
  {
    mintaxi+=a[2];
    a[0]=a[0]-a[2];
  }
  if(a[1]%2==0)
  {
    mintaxi+=a[1]/2;
    a[1]=0;
  }
  else
  {
    mintaxi+=(a[1]-1)/2;
    a[1]=1;
  }
  if(a[0]>=0 && a[0]<=2)
  {
    if(a[1]!=0)
    {mintaxi+=a[1];
    a[0]=0;}
  
  }
  else
  {
    mintaxi+=a[1];
    a[0]=a[0]-2;
  }
  if(a[0]%4==0)
  {
    mintaxi+=a[0]/4;
  }
  else
  {
    mintaxi+=a[0]/4+1;
  }
    cout<<mintaxi<<endl;
  return 0;
}
