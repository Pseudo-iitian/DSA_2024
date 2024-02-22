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
  for(int i=idx;i<n;++i){
    swap(s[i],s[idx]);
    solve(s,idx+1,n);
    swap(s[i],s[idx]);
  }
}

int main() {
  fastio
  string s = "abc";
  string ans;
  int n = s.size();
  solve(s,0,n);
  return 0;
}