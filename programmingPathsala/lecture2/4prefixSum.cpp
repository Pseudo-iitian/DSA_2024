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
const int N = 1e3+10;
// global array is declared with 0
int arr[N][N]; // it wil initialize with 0 itself
long long pf[N][N];

void solve() {
  // precomputation using c++ in 2d array
  // from l to r
  int n ;
  cin>>n;
  for(int i=1;i<=n;++i){
    for(int j=1;j<=n;++j){
      cin>>arr[i][j];
      pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
    }
  }
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int res = pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
  cout<<res;
}

int main() {
  fastio
  solve();
  return 0;
}