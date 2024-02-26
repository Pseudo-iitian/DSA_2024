#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int minDistanceBetweenCows){
  // k is number of cows remain to place at stalls
  int n = stalls.size();
  k--; // for stalls[0]
  int first = stalls[0];
  for(int i=1;i<n;++i){
    int diff = stalls[i]-first;
    if(diff>=minDistanceBetweenCows){
      k--;
      first = stalls[i];
    }
  }
  if(k>0) return false;
  return true;
}

int solve(int n, int k, vector<int> &stalls) {
  sort(stalls.begin(),stalls.end());
  int low = 0;
  // putting at the same stalls if all are same 2 2 2 2 2
  int high = stalls[n-1] - stalls[0];
  // cout<<isPossible(stalls,k,4);
  // int ans = INT_MIN;
  while(low<=high){
    int mid = low + (high-low)/2;
    bool possible = isPossible(stalls,k,mid);
    if(possible){
      // ans = max(ans,mid);
      low = mid + 1;
    }
    else{
      high = mid -1;
    }
  }
  return high;
}

int main(){
  int n = 5;
  int k = 3;
  vector<int> ans = {10, 1, 2, 7, 5};
  cout<<solve(n,k,ans);
  return 0;
}