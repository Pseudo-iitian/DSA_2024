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

int findSum(vector<int> &arr,int target){
  int n = arr.size();
  int j = 0;
  int i=0;
  int sum = 0;
  int count = 0;
  while(j<n){
    sum += arr[j];
    while(i<=j && sum > target) {
      sum -= arr[i];
      i++;
    }
    count += j-i+1;
    j++;
  }
  return count ;
}

int numberofSumK(vector<int> &arr,int goal){
  int n = arr.size();
  vector<int> pf(n,0);
  pf[0]=arr[0];
  for(int i=1;i<n;++i){
    pf[i] = pf[i-1] + arr[i];
  }

  int j=0;
  int count = 0;
  while(j<n){
    if(pf[j]==goal){
      count++;
    }
    int i=0;
    while(i<=j && pf[j]>goal){
      int diff = pf[j]-pf[i];
      if(diff==goal){
        count++;
      }
      i++;
    }
    j++;
  }
  return count;
}

int main() {
  fastio
  vector<int> arr = {0,0,0,0,0};
  int target = 0;
  // cout<<findSum(arr,target);
  // cout<<findSum(arr,target-1);

  cout<<numberofSumK(arr,target);
  return 0;
}