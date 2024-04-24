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
  return dp[n] = fib(n-1,dp) + fib(n-2,dp);
  // return dp[n];
}


int f(int n){
  int prev2 = 0;
  int prev = 1;
  for(int i=2;i<=n;++i){
    int curr = prev + prev2;
    prev2 = prev;
    prev = curr;
  }
  return prev;
  // space optimization 
  // TC - O(n)
  // SC - O(1) 

  // return f(n)
  // 0 1 1 2 3 5
  // 0 1 2 3 4 5
  // f(5) = 5
}

int main(){
  int n = 10;
  vector<int> arr(n+1,-1);
  // fib(n,arr);
  // for(auto &val: arr){
  //   cout<<val<<" ";
  // }

  // n > =2 
  cout<<f(5);
  return 0;
}