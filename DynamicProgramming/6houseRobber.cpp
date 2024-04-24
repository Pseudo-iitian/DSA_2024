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


// recursive approach -> memoization approach
int f(int ind, vector<int> &arr,vector<int> &dp){
  if(ind==0) return arr[ind];
  if(ind<0) return 0;

  if(dp[ind]!=-1) return dp[ind];
  int pick = arr[ind] + f(ind-2,arr,dp);
  // f(ind-2,arr) - will be sum from 0 to n-2 and pick - wil be whole from 0 to n-1
  int notPick = 0 + f(ind-1,arr,dp);
  return dp[ind] = max(pick,notPick);
}
// memoization because of overlapping subproblems
// tc- O(n)
// sc- O(n) recursive stack space + O(n) dp array of size n 

// tabulation 
// tc - O(n)
// sc - O(n) no extra stack space will be there




int main() {
  fastio
  vector<int> arr = {1,2,3,1};
  int n = arr.size();
  vector<int> dp(n,-1);
  cout<<f(n-1,arr,dp);

  return 0;
}