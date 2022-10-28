#include <iostream>
using namespace std;

int main(){
  int n,x,y,z,ox,oy,oz;
  x=y=z=0;
  ox=oy=oz=0;
  cin >>n;
  while(n--){
    cin>>x>>y>>z;
    ox+=x;
    oy+=y;
    oz+=z;
  }
  if(ox==0 && oy ==0 && oz ==0)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
