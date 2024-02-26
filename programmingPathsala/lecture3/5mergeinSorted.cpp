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

vector<int> merge(vector<int> &a,vector<int> &b){
  int i=0,j=0;
  vector<int> ans(a.size()+b.size(),0);
  int k = 0;
  while(i<a.size() && j<b.size()){
    if(a[i]<=b[j]){
      ans[k++]=a[i++];
    }
    else{
      ans[k++]=b[j++];
    }
  }
  while(i<a.size()){
    ans[k++]=a[i++];
  }
  while(j<b.size()){
    ans[k++]=b[j++];
  }
  return ans;
}
int main() {
  fastio
  // both are given sorted
  vector<int> arr1 = {2,2,3,9,11,20,25};
  vector<int> arr2 = {1,4,4,7,18,19};
  vector<int> res = merge(arr1,arr2);
  for(auto &val: res){
    cout<<val<<" ";
  }
  return 0;
}