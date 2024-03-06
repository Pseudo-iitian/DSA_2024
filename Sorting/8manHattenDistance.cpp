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
  vector<int> x = {1,2,3};
  vector<int> y = {4,5,6};
  // {p0,p1},{p0,p2},{p1,p2};
  int n = x.size();
  int sum = 0;
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      // comparing p1 and p2 points
      // int dis = |x2-x1| + |y2-y1|;
      int dis = abs(x[i]-x[j])+abs(y[i]-y[j]);
      sum += dis;
    }
  }
  cout<<"manhatten distance is: "<<sum<<endl;
  return 0;
}