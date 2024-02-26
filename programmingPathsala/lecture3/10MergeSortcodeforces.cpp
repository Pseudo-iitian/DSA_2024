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

void f(vector<int> &arr, int low, int high, int k) {
  int mid = low + (high - low) / 2;
  if (low >= high - 1) return;
  if (k == 0) return;
  swap(arr[mid], arr[mid - 1]);
  k = k - 2;
  f(arr, low, mid, k);
  f(arr, mid, high, k);
}


// https://codeforces.com/problemset/problem/873/D


int main() {
  fastio
  int n,k;
  cin>>n>>k;
  vector<int> arr(n,0);
  for(int i=0;i<n;++i){
    arr[i]=i+1;
  }
  // k is number of calls and it can be maximum to 2*n 
  if(k%2==0 || k>2*n-1){
    cout<<-1;
  }
  else{
    f(arr,0,n-1,k-1);
    for(auto &val: arr){
      cout<<val<<" ";
    }
  }
  return 0;
}