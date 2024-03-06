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

void bubbleSort(vector<int> &arr){
  int n = arr.size();
  bool sorted = false;
  while(!sorted){
    sorted = true;
    for(int i=0;i<n-1;++i){
      if(arr[i]>arr[i+1]){
        // 0 to n-1 me ek baar bhi sort kern apdd rha hai iska mtbl abhi sorted nhi hai
        swap(arr[i],arr[i+1]);
        sorted = false;
      }
    }
  }
}

int main() {
  fastio
  vector<int> arr = {7,11,2,9,3,4,1,10};
  bubbleSort(arr);
  for(auto &val: arr){
    cout<<val<<" ";
  }
  return 0;
}