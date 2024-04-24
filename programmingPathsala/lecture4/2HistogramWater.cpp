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

// here what i have to do 
// is to store the water in between rock of different hight

int solve(vector<int> &arr){
  int n = arr.size();
  vector<int> prefMax(n,0);
  vector<int> suffixMax(n,0);

  int mx = INT_MIN;
  int ans = 0;
  for(int i=0;i<n;++i){
    mx = max(mx,arr[i]);
    prefMax[i]=mx;
  }

  mx = INT_MIN;
  for(int i=n-1;i>=0;--i){
    mx = max(mx,arr[i]);
    suffixMax[i]=mx;
  }

  for(int i=1;i<n-1;++i){
    if(arr[i]<prefMax[i-1] && arr[i]<suffixMax[i+1]){
      ans += min(prefMax[i-1],suffixMax[i+1])-arr[i];
    }
  }

  return ans;
}

int main() {
  fastio
  vector<int> arr = {0,1,0,2,1,3,0,2};
  cout<<solve(arr);
  return 0;
}