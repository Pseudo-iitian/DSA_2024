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

int merge(vector<int> &arr,int low,int mid, int high){
  int lind = low;
  int rind = mid + 1;
  int ans = 0;
  vector<int> temp;
  // sort(arr.begin()+lind,arr.begin()+low + mid+1);
  while(lind<=mid && rind<=high){
    if(arr[low]<=arr[rind]){
      temp.push_back(arr[lind++]);
    }
    else{
      temp.push_back(arr[rind++]);
      ans += (mid - lind + 1);
    }
  }
  while(lind<=mid){
    temp.push_back(arr[lind++]);
  }
  while(rind<=high){
    temp.push_back(arr[rind++]);
  }
  return ans;
}

int mergeSort(vector<int> &arr,int low,int high){
  if(low==high) return 0;
  int mid = low+(high-low)/2;
  return mergeSort(arr,low,mid) + mergeSort(arr,mid+1,high) + merge(arr,low,mid,high);
}

int main() {
  fastio
  vector<int> arr = {5,4,1,2,3};
  int low = 0;
  int high = arr.size()-1;
  cout<<mergeSort(arr,low,high);
  return 0;
}