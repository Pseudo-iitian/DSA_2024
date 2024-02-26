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

int solve(vector<int> &arr,int k){
  int l=0;
  int ans = 0;
  int h = arr.size()-1;
  while(l<=h){
    int sum = arr[l]+arr[h];
    if(sum==k){
      if(arr[l]==arr[h]){
        int cnt = h-l+1;
        ans += (float)cnt*(cnt-1)/2;
        // l = h + 1;
        // l = h + 1;// break too instead of this
        break;
      }
      else{
        // if not equal beech me kuch alag elements hai
        int left = arr[l],cl = 0;
        int right = arr[h],ch = 0;
        // 1 1 2 2 3 
        // ^       ^
        // counting 1 and counting 3 element = target (sum of 1 and 3 = 4 if target is 4);
        while(l<=h && arr[l]==left){
          // for left portion of common part
          cl++;
          l++;
        }
        while(l<=h && arr[h] == right){
          ch++;
          h--;
        }
        ans += ch*cl;
      }
    }
    else if(sum>k){
      h--;
    }
    else{
      // sum < k
      l++;
    }
  }
  return ans;
}

int main() {
  fastio
  vector<int> arr = {1,1,2,2,2,3,3};
  // int n = arr.size();
  int k = 4;
  cout<<solve(arr,k);
  return 0;
}