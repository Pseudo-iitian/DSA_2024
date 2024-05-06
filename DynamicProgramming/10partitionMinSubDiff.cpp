#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// bool f(int ind,int target,vector<int> &arr,vector<vector<int>> &dp){
//   if(target==0) return true;
//   if(ind==0){
//     if(target==arr[ind]) return true;
//     return false;
//   }
//   if(dp[ind][target]!=-1) return dp[ind][target];
//   bool nottake = f(ind-1,target,arr,dp);
//   bool take = false;
//   if(target>=arr[ind]) take = f(ind-1,target-arr[ind],arr,dp);
//   return dp[ind][target] = nottake || take;
// }

int main() {
  fastio
  vector<int> arr = {3,2,7};
  int n = arr.size();
  int sum = accumulate(arr.begin(),arr.end(),0);
  vector<vector<int>> dp(n,vector<int>(sum+1,0));
  // f(n-1,sum,arr,dp);


  for(int i=0;i<n;++i){
      dp[i][0] = true; 
  }
  if(arr[0]<=sum) dp[0][arr[0]] = true;
  for(int ind = 1;ind<n;++ind){
      for(int target = 1;target<=sum;++target){
          bool nottake = dp[ind-1][target];
          bool take = false;
          if(target>=arr[ind]) take = dp[ind-1][target-arr[ind]];
          dp[ind][target] = take | nottake;
      }
  }

  int mn = 1e9;
  for(int s1=0;s1<=sum/2;++s1){
    // cout<<dp[n-1][i]<<endl;
    if(dp[n-1][s1]==true){
      int diff = abs((sum-s1)-s1);
      mn = min(mn,diff);
    }
  }
  cout<<mn<<endl;
  return 0;
}