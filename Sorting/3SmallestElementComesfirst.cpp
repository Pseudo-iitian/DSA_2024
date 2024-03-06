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

class triplet{
  public:
    int val;
    int f;
    int idx;
    triplet(int a,int b,int c){
      this->val = a;
      this->f = b;
      this->idx = c;
    }
};

bool cmp(triplet &a, triplet &b){
  if(a.f != b.f){
    return a.f<b.f;
  }
  if(a.val!=b.val){
    return a.val<b.val;
  }
  return a.idx<b.idx;
}

vector<triplet> v;
int main() {
  fastio
  vector<int> arr = {5,2,3,5,2};
  int n = arr.size();
  vector<int> freq(101,0);
  for(auto &val: arr){
    freq[val]++;
  }
  
  vector<triplet> v;
  for(int i=0;i<n;++i){
    triplet t = triplet(arr[i],freq[arr[i]],i);
    v.push_back(t);
  }

  sort(v.begin(),v.end(),cmp);

  for(auto &ans: v){
    cout<<ans.val<<" "<<ans.idx<<" "<<ans.f<<endl;
  }
  return 0;
}