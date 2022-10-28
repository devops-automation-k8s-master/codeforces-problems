#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n,moves=0;
  vector<int> stacks;
  cin>>n;
  while(n!=0)
  {
    int sum=0,equalsize;

    for(int i=0;i<n;i++)
    {
      int value;
      cin >>value;
      sum+=value;
      stacks.push_back(value);
    }
    equalsize=sum/n;
    //cout>>equalsize;
    for(int i=0;i<stacks.size();i++)
    {
      if(stacks[i]>=-aequalsize)
      {
        moves+=stacks[i]-equalsize;
      }
    }
    cout<<moves;
    cin>>n;

  }

  return 0;
}
