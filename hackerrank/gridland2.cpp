#include <iostream>
using namespace std;
int main()
{
  int n,m,k,result=0;
  cin>>n>>m>>k;
  for(int i=0;i<k;i++)
  {
    int a,b,c;
    cin>>a>>b>>c;
    result+=m-(c-b+1);
  }
  result+=(n-k)*4;
  cout<<result<<endl;
  return 0;
}
