#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
  int n = arr.size();
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(k>=arr[mid]){
      // we can add number of element fron 0 to mid
      int element = mid - low + 1;
      k += element;
      low = mid + 1;
    }
    else{
      high = mid -1;
    }
  }
  return k;
}
int main(){
  vector<int> arr = {2,3,4,7,11};
  int k = 5;
  cout<<findKthPositive(arr,k);
  return 0;
}