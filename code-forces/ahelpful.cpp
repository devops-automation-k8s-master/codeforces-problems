#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
  string s,newstring="",result="";
  cin>>s;
  char *cstr=new char[s.length()+1];
  strcpy(cstr,s.c_str());
  char *token=strtok(cstr,"+");
  while(token!=NULL)
  {
    newstring+=token;
    token=strtok(NULL,"+");
  }

  sort(newstring.begin(),newstring.end());

  for(int i=0;i<newstring.length();i++)
  {
    if(i==0)
      result+=newstring[i];
    else
      result=result+"+"+newstring[i];
  }
  cout<<result<<endl;

  return 0;
}
