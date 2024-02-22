#include<bits/stdc++.h>
using namespace std;

// finding the sum of array using recursion
int TOTALSUM(int low,int high, vector<int> &arr,int &sum){
  int n = arr.size();
  int mid = (low + high)/2;
  if(low==high){
    return arr[low];
  }
  // if(low>high) return ;
  return TOTALSUM(low,mid,arr,sum) + TOTALSUM(mid+1,high,arr,sum);
}

int main(){
  vector<int> arr = {1,2,3};
  int n = arr.size();
  int sum = 0;
  cout<<TOTALSUM(0,n-1,arr,sum);
  return 0;
}

