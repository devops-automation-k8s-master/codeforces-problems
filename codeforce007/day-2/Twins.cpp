#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  int n,minCoins,totalSum,partialCoinSum;
  minCoins=totalSum=partialCoinSum=0;
  vector<int> v;
  cin >>n;
  for(int i=0;i<n;i++){
    int temp;
    cin >>temp;
    v.push_back(temp);
    sort(v.begin(),v.end());
    totalSum+=temp;
  }
  for(int i=n-1;i>=0;i--){
    partialCoinSum+=v[i];
    minCoins+=1;
    if(partialCoinSum>(totalSum-partialCoinSum)){
      cout<<minCoins;
      break;
    }
  }
  return 0;
}
