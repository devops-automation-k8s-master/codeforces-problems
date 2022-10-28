#include <iostream>
using namespace std;
int main()
{
  long long int i,j,k,a,n,result;
  cin>>n>>k;
  if(n%2!=0)
  {
    if(k<=(n+1)/2)
      {
        result=2*k-1;
      }
    else
      {
        k=k-((n+1)/2);
        result=2*k;
      }
  }
  else
  {
    if(k<=(n/2))
    {
      result=2*k-1;
    }
    else
    {
      k=k-n/2;
      result=2*k;
    }
  }
  cout<<result<<endl;

  return 0;
}
