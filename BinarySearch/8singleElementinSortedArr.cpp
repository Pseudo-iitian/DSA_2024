#include<bits/stdc++.h>
using namespace std;

int singleElementInSortedArray(vector<int> arr){
  int n = arr.size();
  int ans ;
  for(int i=0;i<n;++i){
    if(i==0){
      if(arr[i]!=arr[i+1]) return arr[i];
    }
    else if(i==n-1){
      if(arr[i-1]!=arr[i]) return arr[i];
    }
    else{
      // in between
      if(arr[i]==arr[i+1] || arr[i]==arr[i-1]){
        // ok hai
      }
      else{
        ans = arr[i];
      }
    }
  }
  return ans;
}
int main(){
  vector<int> arr = {1,1,2,3,3,4,4,5,5,6,6};
  int n = arr.size();

  cout<<singleElementInSortedArray(arr);
  return 0;
}