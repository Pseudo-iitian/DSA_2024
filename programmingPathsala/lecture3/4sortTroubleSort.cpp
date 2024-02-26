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


int main() {
  fastio
  vector<int> arr = {20,40,10,30};
  int n = 3;
  int i=0;
  while(i<arr.size()-2){
    if(arr[i]>arr[i+n-1]){
      swap(arr[i],arr[i+n-1]);
    }
    i++;
  }
  for(auto &val:arr){
    cout<<val<<" ";
  }
  return 0;
}