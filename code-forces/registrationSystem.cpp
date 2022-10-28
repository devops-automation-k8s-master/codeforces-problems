#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
  long long int n;
  map<string,int> m;
  //map<string,int>::it;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    if(m.find(s)!=m.end())
    {
      string temp="";
      m[s]+=1;
      temp=s+to_string(m[s]);
      m[temp]=0;
      cout<<temp<<endl;;
    }
    else
    {
      m[s]=0;
      cout<<"OK"<<endl;
    }

  }


  return 0;
}
