#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <cstring>
using namespace std;

int cofficentCalculator(int B, vector<int> dimensions,int size,int cofficentIndex,int cofficentVector)
{

  return cofficentVector[cofficentIndex+1](dimensions[2*index-1]-dimensions[2*index-2]+1);
}
void string_token(vector<string> &result,vector<string>inputString)
{

}
int main()
{
  vector<string> arrayName;
  vector<int> arrayBaseAddress;
  vector<int> arrayElemSize;
  vector< vector<int> > arrayDimensions;
  vector<int> inputs(2);
  cin >> inputs[0] >> inputs[1];

  for(int i=0;i<inputs[0];i++)
  {
    int add,elsize,dime;
    string name;
    cin >>name>>add>>elemsize>>dime;
    arrayName.push_back(name);
    arrayBaseAddress.push_back(add);
    arrayElemSize.push_back(elemsize);
    for(int j=0;j<dime*2;j++)
    {
      cin>> bounds;
      arrayDimensions.push_back(bounds);
    }
  }

  for(int i=0;i<inputs[1];i++)
  {
    string refArrayData;
    vector<string> compute;
    getline(cin,refArrayData);
    char *cstr= new char[refArrayData.length()+1];
    strcpy(cstr,refArrayData.c_str());
    char *token=NULL;
    token=strtok(cstr," ");
    while(token!=NULL)
    {
      compute.push_back(token);
      token=strtok(NULL," ");
    }
    int result;
  


  }


  return 0;

}
