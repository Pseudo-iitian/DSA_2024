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

bool f(int ind,int target,vector<int> &arr){
  if(target ==0 )return true;
  if(ind==0){
    if(arr[ind]==target) return true;
    return false;
  }
  bool nottake = f(ind-1,target,arr);
  bool take = f(ind-1,target-arr[ind],arr);
  return take | nottake;
}

bool partition(vector<int> &arr){
  int n = arr.size();
  int s = accumulate(arr.begin(),arr.end(),0);
  if(s&1) return false;
  int target = s/2;

  return f(n-1,target,arr);
}

int main() {
  fastio

  vector<int> arr = {2,3,3,4,5};
  int n = arr.size();
  cout<<partition(arr);
  return 0;
}