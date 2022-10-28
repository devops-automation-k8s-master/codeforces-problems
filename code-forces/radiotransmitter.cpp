#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdlib>
using namespace std;
bool fun(int i,int j)
{
  return i<j;
}
int main()
{
  int n,k,temp,count=0,j=0,i;
  vector<int> v;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    v.push_back(temp);
  }

  sort(v.begin(),v.end());
  j=0;
  for( i=0;i<v.size();)
  {

    if(abs(v[j]-v[i])<=k)
      {i++;}
    else
    {

      count++;
      temp=i-1;
      for(;i<v.size();)
      {
        if(abs(v[temp]-v[i])<=k)
          i++;
        else
        {
          j=i;

        }
      }
    }
  }
  cout<<count;
  return 0;
}
