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

void insertionSort(vector<int> &arr){
  // using insertion sort
  int n = arr.size();
  for(int j=1;j<n;++j){
    int key = arr[j];
    int i = j-1;
    while(i>=0 && arr[i]>key){
      arr[i+1]=arr[i];
      i--;
    }
    arr[i+1]=key;
  }
}

int main() {
  fastio
  vector<int> arr = {3,4,5,1};
  insertionSort(arr);
  for(auto &val:arr){
    cout<<val<<' ';
  }
  return 0;
}