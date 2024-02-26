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

int main() {
  fastio
  vector<int> ans = {2,3,4,5,6,7};
  // first term will be even - ascending 
  // second term will be odd - descending
  int n = ans.size();
  int i=0,j=n-1;
  while(i<=j){
    if(ans[i]&1 && ans[i]%2==0){
      // odd and even
      // swap(ans[i],ans)
    }
  }
  return 0;
}