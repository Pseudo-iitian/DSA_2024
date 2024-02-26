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

int solve(vector<int> &arr,int B){
  // here, i will count for number of rectangle whose area < B
  int l = 0;
  int h = arr.size()-1;
  int ans = 0;
  int cnt = 0;
  while(l<=h){
    if(arr[l]*arr[h] <= B){
      ans += 2*(h-l);
      if(arr[l]*arr[l]<=B) ans += 1;
      // 2*(h-l) is for counting number of permutaion or ordered we can get
      // 2 3 5 and B = 15;
      // ans = [2,5],[5,2],[2,3],[3,2]
      // and 1 is for itselft [2,2]
      l++;
    }
    else{
      h--;
    }
  }
  return ans;
}

int main() {
  fastio
  vector<int> arr = {2,3,5};
  int B = 15;
  // distincf sorted elements, count number of rectangle, we can make area < B
  cout<<solve(arr,B);
  return 0;
}