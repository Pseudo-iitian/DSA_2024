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

bool solve(vector<vector<char>> &word,string &emp,int x,int y,string target,int ind) {
  // move right
  int row = word.size();
  int col = word[0].size();
  
}

int main() {
  fastio
  vector<vector<char>> word = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
  string target = "ABCCED";
  int row = word.size();
  int col = word[0].size();
  string s = "";
  for(int i=0;i<row;++i){
    for(int j=0;j<col;++j){
      if(word[i][j]==target[0]){
        solve(word,s,i,j,target,0); 
      }
    }
  }

  // cout<<solve(word,s,0,0,target,0);
  return 0;
}