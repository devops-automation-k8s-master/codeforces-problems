#include <iostream>
#include <string>
using namespace std;
int main()
{
  int testCase;
  cin>>testCase;
  while(testCase--)
  {
    string s;
    cin >>s;
    if(s.length()>10)
    {
      cout<<s[0]+to_string(s.length()-2)+s[s.length()-1]<<endl;
    }
    else
      cout<<s<<endl;
  }
  return 0;
}
