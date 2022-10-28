#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int wmelonSize;
  cin >>wmelonSize;
  for(int i=1;i<wmelonSize;i++)
  {

    if((wmelonSize-i)%2==0 && i%2==0)
      {
        cout<<"YES";
        return 0;
      }

  }
  if(wmelonSize%4==0)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
