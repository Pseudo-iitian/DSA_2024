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

int maxDiff(vector<int> arr){
  int mx = INT_MIN;
  int mn = INT_MAX;
  for(int i=0;i<arr.size();++i){
    mx = max(mx,arr[i]);
    mn = min(arr[i],mn);
  }
  return mx - mn;
}

int leastDiff(vector<int> arr){
  sort(arr.begin(),arr.end());
  int ans = INT_MAX;
  for(int i=0;i<arr.size()-1;++i){
    int diff = arr[i+1]-arr[i];
    ans = min(ans,diff);
  }
  return ans;
}

int main() {
  fastio
  vector<int> arr = {4,6,1,2,3};
  int n = arr.size();

  cout<<maxDiff(arr)<<endl;
  cout<<leastDiff(arr)<<endl;
  return 0;
}