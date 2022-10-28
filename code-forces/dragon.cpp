#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct drago
{
  int x;
  int y;
}drago;
bool fun(drago a,drago b)
{
  return a.x<=b.x;

}
int main()
{
  int n,s;
  cin>>s>>n;
  vector<drago> v;
  for(int i=0;i<n;i++)
  {
    drago p;
    cin>>p.x>>p.y;
    v.push_back(p);
  }
  sort(v.begin(),v.end(),fun);
  for(int i=0;i<v.size();i++)
  {
    if(s>v[i].x)
    {
      s=s+v[i].y;
    }
    else
    {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
