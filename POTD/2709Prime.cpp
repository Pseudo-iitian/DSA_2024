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

const int MAX = 1e5 + 5;
bool prime[MAX];
int spf[MAX];// smmalest prime factor of a number is ?

int ct;
void dfs(int node, unordered_map<int,vector<int>> &gr, vector<bool>& vis){
  if(vis[node]){
    return;
  }
  vis[node]=true;
  ct++;
  for(auto ne:gr[node]){
    if(vis[ne]==0){
      dfs(ne,gr,vis);
    }
  }
}
void sieve(){
  fill(prime,prime+MAX,true);
  for(int i=1;i<MAX;++i){
    spf[i]=1;
  }
  prime[0]=prime[1]=false;
  for(int i=2;i*i<MAX;++i){
    if(prime[i]){
      for(int j=i*i;j<MAX;++j){
        if(prime[j]){
          spf[j]=i;
        }
        prime[j]=false;
      }
    }
  }
}

vector<int> getFactorization(int x){
  vector<int> res;
  unordered_map<int,int> mp;
  while(x!=1){
    mp[spf[x]]++;
    x = x/spf[x];
  }
  for(auto &val: mp){
    res.push_back(val.first);
  }
  return res;
}
bool canTraverseAllPairs(vector<int>& nums) {
  sieve();

  int n = nums.size();
  unordered_map<int,vector<int>> mp;
  for(int i=0;i<n;++i){
    mp[i] = getFactorization(nums[i]);
  }

  unordered_map<int,vector<int>> rmp;
  for(auto &val: mp){
    int id = val.first;
    for(auto &prime: val.second){
      rmp[prime].push_back(id);
    }
    unordered_map<int,vector<int>> gr;
    for(auto &p: rmp){
      vector<int> ids = p.second;
      if(ids.size()<=1){
        continue;
      }
      for(int i=1;i<ids.size();++i){
        int u = ids[i-1];
        int v = ids[i];

        gr[u].push_back(v);
        gr[v].push_back(u);
      }
    }
    vector<bool> vis(n,0);
    int ct = 0;
    dfs(0,gr,vis);
    if(ct==n) return true;
    return false;
  }
}
int main() {
  fastio
  vector<int> arr = {2,3,6};
  cout<<canTraverseAllPairs(arr);
  return 0;
}