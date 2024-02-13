#include<bits/stdc++.h>
using namespace std;

// return 2 - > m
// return 1 - == m
// return 0 - <m;
long long f(int val,int n,int m){
  long long res = 1;
  for(int i=0;i<n;++i){
    res = res * (long long)val;
    if(res > m) return 2;
  }
  if(res == m) return 1;
  return 0;
}

int nSquareRoot(int m,int n){
  int low = 0;
  int high = m;
  while(low<=high){
    int mid = low + (high-low)/2;
    long long val = f(mid,n,m);
    if(val == 1){
      return mid;
    }
    else if(val == 0){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return -1;
}
int main(){
  int m = 27;
  int n = 3;

  cout<<nSquareRoot(m,n);
  return 0;
}