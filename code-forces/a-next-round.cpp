#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int n,k,result=0;
  vector<int> v;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    int elem;
    cin>>elem;
    v.push_back(elem);

  }
  for(int i=0;i<n;i++)
  {
    if(v[k]==0 && v[k]<v[i])
      result++;
    else if(v[k]!=0 && v[k]<=v[i])
        result++;
  }
  cout<<result<<endl;
  return 0;
}
