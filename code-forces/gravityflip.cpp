#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  int array[100];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>array[i];
  }
  sort(array,array+n);
  for(int i=0;i<n;i++)
  {
    cout<<array[i]<<"\t";
  }
  return 0;
}
