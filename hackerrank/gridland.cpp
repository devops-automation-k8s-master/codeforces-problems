#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct trainmap
{
  long long int s;
  long long int e;
}trainmap;

bool func(trainmap a,trainmap b)
{
  return a.s<=b.s;
}


int main()
{
  vector< vector<trainmap> > v(1000);
  long long int n,m,k,r,x,y,result=0,rowCellCompute=0,start=0,end=0,count=0;
  cin>>n>>m>>k;
  for(int i=0;i<k;i++)
  {
    trainmap temp;
    cin>>r>>temp.s>>temp.e;
    temp.s--;
    temp.e--;
    v[(r)%k].push_back(temp);
  }
  for(int i=0;i<k;i++)
  {
    rowCellCompute=0;
    start=0;end=0;
    if(v[i].size()>1)
      {
        count++;
        sort(v[i].begin(),v[i].end(),func);
        start=v[i][0].s;
        end=v[i][0].e;
        for(int j=0;j<v[i].size()-1;j++)
        {
          if(v[i][j].e<=v[i][j+1].s)
          {
            end=v[i][j+1].e;
            if(j==v[i].size()-1)
            {
              rowCellCompute+=end-start+1;
            }
          }
          else
          {
            rowCellCompute+=end-start+1;
            start=v[i][j+1].s;
            end=v[i][j+1].e;
            if(j==v[i].size()-1)
            {
              rowCellCompute+=end-start+1;
            }
          }
        }
        result+=n-rowCellCompute;
      }
      else if(v[i].size()==1)
      {
        start=v[i][0].s;
        end=v[i][0].e;
        result+=n-(end-start+1);
        count++;
      }

  }
  result+=(r-count)*n;
  cout<<result<<endl;
  return 0;
}
