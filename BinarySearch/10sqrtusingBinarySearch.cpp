#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n){
  int low = 1;
  int high = n;
  int ans = -1;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(mid*mid <= n){
      ans = mid;
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return ans;
}
int main(){
  int n= 38;
  cout<<findSqrt(n);
  return 0;
}