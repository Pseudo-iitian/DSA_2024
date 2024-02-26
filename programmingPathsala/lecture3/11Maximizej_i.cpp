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

int cmp(int &a,int &b){
  
}

int func(vector<int> arr){
  int n = arr.size();
  vector<pair<int,int>> ans;
  for(int i=0;i<n;++i){
    ans.push_back({arr[i],i});
  }
  sort(ans.begin(),ans.end(),cmp);
}

int main() {
  fastio
  vector<int> arr = {7,100,1,9,90,0,-1};
  cout<<func(arr);
  return 0;
}