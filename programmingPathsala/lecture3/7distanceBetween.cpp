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

int solve(vector<int> &arr){
  int d = 0;
  int sum = 0;
  int n = arr.size();
  for(int i=1;i<n;++i){
    d += i*(arr[i]-arr[i-1]);
    sum+=d;
  }
  return sum;
}

int main() {
  fastio
  vector<vector<int>> ans = {{1,2},{3,5},{7,4}};
  int n = ans.size();
  vector<int> x;
  vector<int> y;
  for(int i=0;i<n;++i){
    x.push_back(ans[i][0]);
  }
  for(int i=0;i<n;++i){
    y.push_back(ans[i][1]);
  }
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
  int a = solve(x);
  int b = solve(y);
  cout<<a+b;
  return 0;
}