#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr){
  int n = arr.size();
  if(n==1) return 0;
  int low = 0;
  int high = n-1;

  if(arr[0]>arr[1]) return 0;
  if(arr[n-1]>arr[n-2]) return n-1;
  low = 1;
  high = n-2;
  while(low<=high){
    int mid = (low + (high-low)/2);
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
      return mid;
    }
    else if(arr[mid]>arr[mid-1]){
      // we are on increaseing order
      // go to right
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return -1;
}

int main(){
  vector<int> arr = {0,10,5,2};
  cout<<findPeak(arr);
  return 0;
}