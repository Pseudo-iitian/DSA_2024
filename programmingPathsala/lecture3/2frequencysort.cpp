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

int cmp(const pair<int,int> &a,const pair<int,int> &b){
  if(a.second!=b.second){
    return a.second<b.second;
  }
  else{
    return a.first<b.first;
  }
}
int main() {
  fastio
  vector<int> arr ={1,1,3,2,5};
  map<int,int> mp;
  for(auto &val: arr){
    mp[val]++;
  }
  vector<pair<int,int>> ans;
  // value and frequency
  for(auto &val: mp){
    ans.push_back({val.first,val.second});
  }
  sort(ans.begin(),ans.end(),cmp);
  for(auto &val: ans){
    for(int i=0;i<val.second;++i){
      cout<<val.first<<" ";
    }
  }
  
  return 0;
}