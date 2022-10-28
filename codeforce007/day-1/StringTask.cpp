#include <iostream>
#include <string>
using namespace std;

int main(){
  string input,output="";
  cin>>input;
  for(int i=0;i<input.size();i++){
    char tempChar=input[i];
    if(tempChar<=90){
      tempChar=tempChar-65+97;
    }
    if(tempChar != 'a' && tempChar != 'e' && tempChar != 'i' && tempChar != 'o' && tempChar != 'u'){
      cout<<"."<<tempChar;
    }
  }
  return 0;
}
