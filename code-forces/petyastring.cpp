#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  string first,second;
  cin>>first>>second;
  for(int i=0;i<first.length();i++)
  {
    if(first[i]<97)
      first[i]=first[i]+32;

  }
  for(int i=0;i<second.length();i++)
  {
    if(second[i]<97)
      second[i]=second[i]+32;
  }
  if(first<second)
    cout<<"-1"<<endl;
  else if(first==second)
    cout<<"0"<<endl;
  else
    cout<<"1"<<endl;
  return 0;
}
