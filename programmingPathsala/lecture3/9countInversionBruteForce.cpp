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

// count inversions - i<j and arr[i]>arr[j]
int solve(vector<int> &arr){
  int cnt = 0;
  int n = arr.size();
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      if(arr[i]>arr[j]){
        cnt++;
      }
    }
  }
  return cnt;
  // TC - O(n^2);
  // SC - O(1);
}

int main() {
  fastio
  vector<int> arr = {5,3,2,4,1};
  int n = arr.size();
  cout<<solve(arr);
  return 0;
}