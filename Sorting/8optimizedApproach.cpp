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

int findManhattenDistance(vector<int> &x){
  int n = x.size();
  int totalXsum = accumulate(x.begin(),x.end(),0);
  int ans = 0;
  for(int i=0;i<n;++i){
    totalXsum -= x[i];
    ans += totalXsum - (n-i-1)*x[i];
  }
  return ans;
}

int main() {
  fastio
  vector<int> x = {1,2,3,4};
  vector<int> y = {5,6,7,8};

  int first = findManhattenDistance(x);
  int second = findManhattenDistance(y);
  int res = first + second;
  cout<<res<<endl;
  return 0;
}