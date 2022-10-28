#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  int n,k,sum=0,count=0;
  int original[100],suma[100],sumb[100];
  cin >>n;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    original[i]=k;
    sum+=k;

  }
  sort(original,original+n);
  k=0;
  for(int i=n-1;i>=0;i--)
  {
    k+=original[i];
    if(sum-k>=k)
      count++;
  }
count++;
  cout<<count<<endl;

}
