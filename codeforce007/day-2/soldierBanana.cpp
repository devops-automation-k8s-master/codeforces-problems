#include <iostream>
using namespace std;

int main(){
  int k,n,w,bMoney,output;
  cin>>k>>n>>w;
  bMoney =  n-(k*w*(w+1)/2);
  output=bMoney<0?(-1*bMoney):0;
  cout<<output;
  return 0;
}
