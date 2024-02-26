#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> &dp){
  if(n<=1){
    dp[n]=n;
    return n;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  dp[n] = fib(n-1,dp) + fib(n-2,dp);
  return dp[n];
}

int main(){
  int n = 5;
  vector<int> arr(n+1,-1);
  fib(n,arr);
  for(auto &val: arr){
    cout<<val<<" ";
  }
  return 0;
}