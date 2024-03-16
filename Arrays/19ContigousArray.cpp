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

// WHEN 0 -1
// then it is subarray sum to 0 problem

int findMaxLength(vector<int> &arr) {
  int n = arr.size();
  int maxLen = 0;
  int sum = 0;
  map<int,int> mp;
  for(int i=0;i<n;++i){
    if(arr[i]==0){
      arr[i]=-1;
    }
    sum += arr[i];
    if(sum==0){
      maxLen = max(maxLen,i+1);
    }
    if(mp.find(sum)==mp.end()){
      // nhi mila to dal do 
      mp[sum]=i;
    }
    else{
      maxLen = max(maxLen,i-mp[sum]);
    }
  }
  return maxLen;
}

int main() {
  fastio
  vector<int> arr = {1,1,0,0,1,1,0,1,1};
  int n = arr.size();
  cout<<findMaxLength(arr);
  // findMaxLength();
  return 0;
}