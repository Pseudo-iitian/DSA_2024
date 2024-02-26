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

// here i have to solve for target sum
// target will be given and i have to solve for two pair which can sum to become target
int main() {
  fastio
  vector<int> arr = {2,2,3,3,2,2};
  int target = 9;
  int i=0,j=arr.size()-1;
  vector<pair<int,int> > totalRes;
  while(i<j){
    int sum = arr[i]+arr[j];
    if(sum==target){
      totalRes.push_back({arr[i],arr[j]});
      i++;
      j--;
    }
    else if(sum>target){
      j--;
    }
    else{
      i++;
    }
  }

  for(auto &val: totalRes){
    cout<<val.first<<" "<<val.second<<endl;
  }
  return 0;
}