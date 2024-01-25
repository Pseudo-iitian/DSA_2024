#include<bits/stdc++.h>
using namespace std;

int findMaxRotatedSortedArr(vector<int> &arr){
  int mx = INT_MIN;
  int n = arr.size();
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    // thinking which is sorted left half or right half
    if(arr[low]<=arr[mid]){
      mx = max(mx,arr[mid]);
      low = mid+1;
    }
    else{
      mx = max(mx,arr[high]);
      high = mid-1;
    }
  }
  return mx;
}

int main(){
  vector<int> arr = {4,5,1,2,3};
  int n = arr.size();
  cout<<findMaxRotatedSortedArr(arr);
  return 0;
}