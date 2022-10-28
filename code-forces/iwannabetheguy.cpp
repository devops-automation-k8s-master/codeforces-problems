#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
  int n,p,q,temp;
  vector<int> vp;
  vector<int> vq;
  cin>>n>>p;
  int *array=(int*)calloc(n+1,sizeof(int));
  for(int i=0;i<p;i++)
  {
      cin>>temp;
      array[temp]+=1;

  }
  cin>>q;
  for(int i=0;i<q;i++)
  {
    cin>>temp;
    array[temp]+=1;
  }
  for(int i=1;i<n+1;i++)
  {
    if(array[i]>=1)
      continue;
    else
    {
      cout<<"Oh, my keyboard!";
      return 0;
    }
  }
  cout<<"I become the guy.";
  free(array);
  return 0;
}
