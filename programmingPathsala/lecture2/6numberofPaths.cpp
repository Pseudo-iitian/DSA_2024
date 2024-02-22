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
// #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int MOVE(int i,int j,int M,int N){

  if(i==M-1 && j==N-1){
    return 1;
  }
  if(i>=M || j>=N) return 0;
  // move right
  return MOVE(i,j+1,M,N) + MOVE(i+1,j,M,N);
}
// long long  numberOfPaths(int M, int N){
//   int count = 0;
//   move(0,0,M,N,count);
// }
int main() {
  // fastio
  // solve();
  int m = 3;
  int n = 3;
  // numberOfPaths(m,n);
  int count = 0;
  cout<<MOVE(0,0,m,n);
  return 0;
}