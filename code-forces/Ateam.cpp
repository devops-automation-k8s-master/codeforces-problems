#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,a,b,c,result=0;
  cin>>n;
  while(n--)
  {
    cin>>a>>b>>c;
    if(a+b+c>=2)
      result++;
  }
  cout<<result<<endl;
  return 0;
}
