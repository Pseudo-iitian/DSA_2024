#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int target){
  int n = arr.size();
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(target==arr[mid]) return mid;
    else if(target>arr[mid]) low = mid+1;
    else high = mid-1;
  }
  return -1;
}

int main(){
  vector<int> arr = {1,2,3,4,5,6};
  int target = 4;
  cout<<binarySearch(arr,target)<<endl;
  return 0;
}