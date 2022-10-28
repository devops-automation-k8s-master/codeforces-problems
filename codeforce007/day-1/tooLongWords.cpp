#include <iostream>
#include <string>
using namespace std;

int main(){
  int testCases;
  string word;
  cin >> testCases;
  while(testCases--){
    cin>>word;
    if(word.size()>10){
      cout<<word[0]+to_string(word.size()-2)+word[word.size()-1]<<endl;
    }
    else
      cout<<word<<endl;
}
  return 0;
}
