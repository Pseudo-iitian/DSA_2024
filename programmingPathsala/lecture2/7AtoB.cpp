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

// int solve(int a,int b,vector<int> ans) {
//   if(a>b) return false;
//   ans.push_back(a);
//   bool flag = false;
//   flag = solve(2*a,b,ans);
//   if(flag) return true;
//   flag = solve(10*a+1,b,ans);
//   if(flag) return true;
//   ans.pop_back();
//   return false; 
// }
bool transformation(int a,int b){
  if(a>b) return false;
  transformation(2*a,b);
  transformation(10*a+1,b)
}

int main() {
  fastio
  int a = 2;
  int b = 4;
  // int cnt = 0;
  vector<int> ans;
  transformation(a,b,ans);
  // cout<<solve(a,b,ans);
  return 0;
}