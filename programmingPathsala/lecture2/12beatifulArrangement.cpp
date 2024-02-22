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


int count(int ind,vector<int> &arr){
    int n = arr.size();
    if(ind>=n) return 1;
    int ans = 0;
    for(int i=ind;i<n;++i){
        if(arr[i]%(i+1)==0 || (i+1)%arr[i]==0){
            swap(arr[i],arr[ind]);
            ans += count(ind+1,arr);
            swap(arr[i],arr[ind]);
        }
    }
    return ans;
}
int countArrangement(int n) {
    vector<int> arr;
    for(int i=0;i<n;++i){
        arr.push_back(i);
    }
    return count(0,arr);
}

int main() {
  fastio
  int n= 2;
  cout<<countArrangement(n);
  return 0;
}