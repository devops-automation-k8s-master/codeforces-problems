#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
int absfunction(int a, int b)
{
  return a-b>0?a-b:b-a;
}
int jollyNumber(vector<int> &v)
{
  int lenVector=v.size();
  for(int i=0;i<lenVector;i++)
  {
    if(absfunction(v[i],v[i+1])>lenVector)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  string inputs;
  vector<int> data;
  getline(cin,inputs);
  while(inputs.length()!=0)
  {
      char * cstr=new char[inputs.length()+1];
      strcpy(cstr,inputs.c_str());
      char *token=strtok(cstr," ");
      while(token!=NULL)
      {
        data.push_back(atoi(token));
        token=strtok(NULL," ");
      }
      if(jollyNumber(data))
      {
        cout<<"JOLLY";
      }
      else
      cout<<"NOTJOLLY";
      data.clear();
      token=NULL;
      getline(cin,inputs);
  }
  return 0;
}
