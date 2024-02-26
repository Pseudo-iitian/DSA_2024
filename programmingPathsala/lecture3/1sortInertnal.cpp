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

int cmp(const pair<int,int>& a,const pair<int,int>& b){
  if(a.first==b.first){
    return a.second<b.second;
  }
  return a.first<b.first;
}

int main() {
  fastio
  vector<int> ans = {4,5,6,6,7,43,4,4};
  vector<pair<int,int> > arr;
  for(int i=0;i<ans.size();++i){
    arr.push_back({ans[i],i});
  }
  sort(arr.begin(),arr.end(),cmp);
  for(auto &val: arr){
    cout<<val.first<<" "<<val.second<<endl;
  }
  return 0;
}