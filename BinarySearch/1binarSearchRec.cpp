#include<bits/stdc++.h>
using namespace std;

int binarySearchRec(vector<int> arr, int low, int high,int target){
  if(low> high) return -1;
  int mid = (low+high)/2;
  if(arr[mid]==target) return mid;
  else if(target>arr[mid]) return binarySearchRec(arr,mid+1,high,target);
  return binarySearchRec(arr,low,mid-1,target);
}
int main(){
  vector<int> arr = {1,2,3,4,5,6,8};
  cout<<binarySearchRec(arr,0,arr.size()-1,4);
  return 0;
}