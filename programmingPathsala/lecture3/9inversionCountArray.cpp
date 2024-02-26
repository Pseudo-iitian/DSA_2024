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

// doing merge operation for inversion count
// [2,3,5,6] [2,2,4,4,8]
//  l         r
// l<r and arr[l]>=arr[r] then cnt++;and l++;
// if not take r to right -> r++
// 2 2 2 3 4 4 5 6 8

// inversion count of left + inversion count of right + intersection inversion count - total inversion count

// same as the code of merge sort

// min count of inversion = 0
// max count of inversion = n*(n-1)/2;

int merge(vector<int> &arr,int low,int mid, int high){
  int lind = low;
  int rind = mid + 1;
  vector<int> temp;
  // sort(arr.begin()+lind,arr.begin()+low + mid+1);
  int cnt = 0;
  while(lind<=mid && rind<=high){
    if(arr[lind]<=arr[rind]){
      temp.push_back(arr[lind++]);
    }
    // low is greater than right index here ** we have to count for this here
    else{
      temp.push_back(arr[rind++]);
      cnt += (mid - lind + 1);
    }
  }
  while(lind<=mid){
    temp.push_back(arr[lind++]);
  }
  while(rind<=high){
    temp.push_back(arr[rind++]);
  }
  for(int i=low;i<=high;++i){
    arr[i]=temp[i-low];
  }
  return cnt;
}

// void mergeSort(vector<int> &arr,int low,int high){
//   if(low>=high) return;
//   int mid = low+(high-low)/2;
//   mergeSort(arr,low,mid);
//   mergeSort(arr,mid+1,high);
//   merge(arr,low,mid,high);
// }

int mergeSort(vector<int> &arr,int low,int high){
  int cnt = 0;
  if(low>=high) return cnt;
  int mid = low+(high-low)/2;
  cnt += mergeSort(arr,low,mid);
  cnt += mergeSort(arr,mid+1,high);
  cnt += merge(arr,low,mid,high);
  return cnt;
}

int numberOfInversions(vector<int> &arr){
  return mergeSort(arr,0,arr.size()-1);
  // return cnt;
}

int main() {
  fastio
  vector<int> arr = {5,4,1,2,3};
  int low = 0;
  int high = arr.size()-1;
  // mergeSort(arr,low,high);
  // correct code is correct 
  cout<<numberOfInversions(arr);
  // TC - O(nlog(n))
  return 0;
}