#include <iostream>
using namespace std;
int main()
{
  long long int k,n,w,totalRupee;
  cin>>k>>n>>w;
  totalRupee=(w*(w+1)*k)/2;
   int result=totalRupee-n>=0?totalRupee-n:0;
  cout<<result<<endl;
  return 0;
}
