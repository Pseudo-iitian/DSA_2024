#include<bits/stdc++.h>
using namespace std;

void sumOfSubset(int ind, vector<int> &arr,int sum,int k,vector<int> &ans,vector<vector<int> > &res){
  int n = arr.size();
  if(ind == n){
    if(sum==k){
      res.push_back(ans);
    }
  }
  // pick
  sum+=arr[ind];
  ans.push_back(arr[ind]);
  sumOfSubset(ind+1,arr,sum,k,ans,res);

  //not pick
  sum-=arr[ind];
  ans.pop_back();
  sumOfSubset(ind+1,arr,sum,k,ans,res);
}
int main(){
  vector<int> set;
  int sum;  
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    int val;
    cin>>val;
    set.push_back(val);
  }
  cin>>sum;
  vector<int> ans;
  vector<vector<int>> res;
  sumOfSubset(0,set,0,sum,ans,res);

  for(int i=0;i<res.size();++i){
    for(int j=0;j<res[i].size();++j){
      cout<<res[i][j]<<" ";
    }
  }
  return 0;
}
