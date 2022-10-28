#include <iostream>
#include <string>
using namespace std;
int findchar(char c)
{
  string vowels="aeiouyAEIOUY";
  size_t found = vowels.find(c);
  if(found !=std::string::npos)
    return 0;
  else
    return 1;
}
int main()
{
  string word;
  string vowels="aeiouy",result="";
  cin >>word;
  for(int i=0;i<word.length();i++)
  {
    char temp=word[i]+32;
    if(word[i]<97 && findchar(word[i]))
      result=result+"."+temp;
    else if(findchar(word[i]))
      result=result+"."+word[i];
  }
  cout<<result<<endl;
  return 0;
}
