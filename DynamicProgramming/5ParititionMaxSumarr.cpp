#include<bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> arr,int k,vector<int> &dp){
  int n = arr.size();
  if(ind==n) return 0;
  if(dp[ind]!=-1) return dp[ind];
  int len = 0;
  int mx = INT_MIN;
  int mxAns = INT_MIN;
  for(int j = ind;j<min(ind+k,n);++j){
    len++;
    mx = max(mx,arr[j]);
    int sum = len*mx + f(j+1,arr,k,dp);
    mxAns = max(mxAns,sum);
  }
  return dp[ind] = mxAns;
}
int main(){
  vector<int> arr = {1,15,7,9,2,5,10};
  int n = arr.size();
  int k = 3;
  vector<int> dp(n,-1);
    
  return 0;
}