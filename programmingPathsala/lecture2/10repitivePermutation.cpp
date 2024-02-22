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

void solve(string &s,int idx,int n) {
  if(idx==n){
    cout<<s<<endl;
    return;
  }
  bool arr[256] = {false};
  for(int i=idx;i<n;++i){
    if(arr[s[idx]]==false){
      arr[s[idx]]=true;
      swap(s[i],s[idx]);
      solve(s,idx+1,n);
      swap(s[i],s[idx]);
    }
    else continue;
  }
}

int main() {
  fastio
  string s = "abab";
  string ans;
  int n = s.size();
  bool arr[256] = {false};
  solve(s,0,n);
  return 0;
}