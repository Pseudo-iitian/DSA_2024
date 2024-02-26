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

int cmp(pair<int,int> &a,pair<int,int> &b){
  if(a.first==b.first){
    a.second<b.second;
  }
  return a.first<b.first;
}

int func(vector<int> arr){
  int n = arr.size();
  vector<pair<int,int>> ans;
  for(int i=0;i<n;++i){
    ans.push_back({arr[i],i});
  }
  sort(ans.begin(),ans.end(),cmp);
  int mx= INT_MIN;
  int mxAns = INT_MIN;
  for(int i=n-1;i>=0;--i){
    mx = max(mx,ans[i].second);
    // cout<<ans[i].second<<" ";
    int diff = mx - ans[i].second;
    mxAns = max(mxAns,diff);
  }
  return mxAns;
}

int main() {
  fastio
  vector<int> arr = {7,100,1,9,90,0,5,-1};
  // here we have to maximize the distance between j and i i,e. j-i ko maximize kerna hai
  // j!=i and arr[j]>arr[i]
  cout<<func(arr);
  return 0;
}