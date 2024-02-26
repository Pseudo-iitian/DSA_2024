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

// here we have to find the total nunber of merge sort calls is given and we have to decide for the array 
// output the array

// hame ek aisa aray bnana hai jiske number of calls = k ho (merge sort calls)
void f(vector<int> &arr, int low, int high, int &k) {
  // finding the mid
  if (low >= high - 1 || k<1) return;
  // adding a single inversion to it
  int mid = low + (high - low) / 2;
  swap(arr[mid], arr[mid - 1]);
  k = k - 2;
  f(arr, low, mid, k); // mid is excluded here
  f(arr, mid, high, k); // mid is included here
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
    k--;
    f(arr,0,n,k);
    for(auto &val: arr){
      cout<<val<<" ";
    }
  }
  return 0;
}