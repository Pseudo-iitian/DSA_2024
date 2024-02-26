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

// counting vector of pair<primfactors, count of primfactor> p
vector<pair<int,int>> primeFactors(int n){
  vector<pair<int,int>> ans;
  for(int i=2;i<=n;++i){
    if(n%i==0){
      int cnt = 0;
      // n has to be modified, 
      while(n%i==0){
        cnt++;
        n = n/i;
      }
      ans.push_back({i,cnt});
      // n -> n/2 -> n/3 --> then O(logn)
    }
  }
  // TC - NlogN worst case
  return ans;
}



vector<pair<int,int>> primeFactorsOptimalApproach(int n){
// i will keep on dividing n by i till sqrt(n)
// and n remain will be a prime factor with frequency as 1
// n = 15; sqrt(15) = 3
// 1 2 3 5 15
//     ^
// till left and inclusive of 3, if it divides 15, will be prime factor and 5 will also be
// n = 15/3; n = 5; i=3;
// n = 5 it is also a primt factor will added with frequency as 1
  vector<pair<int,int>> ans;
  for(int i=2;i*i<=n;++i){
    if(n%i==0){
      int cnt = 0;
      while(n%i==0){
        cnt++;
        n= n/i;
      }
      ans.push_back({i,cnt});
    }
  }
  if(n>1) ans.push_back({n,1});
  return  ans;

  // tc - sqrt(n)*log(n); time complexity much better than previous one
}

int main() {
  fastio
  vector<pair<int,int>> arr = primeFactorsOptimalApproach(15);
  for(auto &val: arr){
    cout<<val.first<<" "<<val.second<<endl;
  }
  return 0;
}