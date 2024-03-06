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

// bool cmp(int a,int b){
//   // return array in ascending order
//   return a<b;
// }

// bool cmp(int a,int b){
//   // return desceding order by value
//   return a>b;
// }

bool cmp(int a,int b){
  return abs(a)<abs(b);
}

int main() {
  fastio
  vector<int> arr = {-5,7,1,-9};
  int n = arr.size();

  sort(arr.begin(),arr.end(),cmp);

  cout<<"printing array in asceding order in terms of its magnitude: "<<endl;
  for(auto &val: arr){
    cout<<val<<" ";
  }
  return 0;
}