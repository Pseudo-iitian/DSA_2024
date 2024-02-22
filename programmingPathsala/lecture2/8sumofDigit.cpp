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

int sum(string s){
  int ans = 0;
  for(int i=0;i<s.size();++i){
    ans += (s[i]-'0');
  }
  return ans;
}

int solve(string n) {
  if(n.size()==1){
    return stoi(n);
  }
  return solve(to_string(sum(n)));
}

int main() {
  fastio
  string n = "9875";
  int k = 4;
  string s = "";
  for(int i=0;i<k;++i){
    s+=n;
  }
  cout<<solve(s);
  return 0;
}