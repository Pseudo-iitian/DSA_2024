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

bool cmp(pair<char,int> &a,pair<char,int> &b){
  return a.second<b.second;
}

int main() {
  fastio
  string s= "cba";
  string t = "aabbbccddef";
  vector<pair<char,int>> ans;
  map<char,int> mp;
  for(int i=0;i<s.size();++i){
    mp[s[i]]=i+1;
  }
  // i am goind to fetc s char from t
  for(int i=0;i<t.size();++i){
    if(mp.find(t[i])!=mp.end()) {
      // mil gya
      ans.push_back({t[i],mp[t[i]]});
    }
    else{
      ans.push_back({t[i],-1});
    }
  }

  sort(ans.begin(),ans.end(),cmp);

  for(auto &val: ans){
    cout<<val.first;
  }
  return 0;
}