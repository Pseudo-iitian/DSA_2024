#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int idx1, int idx2,vector<vector<int> > &dp){
  if(idx1<0 || idx2<0) return 0;
  if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
  if(s1[idx1]==s2[idx2]) return dp[idx1][idx2] = 1+LCS(s1,s2,idx1-1,idx2-1,dp);
  return dp[idx1][idx2] = 0+max(LCS(s1,s2,idx1-1,idx2,dp),LCS(s1,s2,idx1,idx2-1,dp));
}

int main(){
  string s1 = "acd";
  string s2 = "ced";
  int idx1 = s1.size()-1;
  int idx2 = s2.size()-1;
  int n = s1.size();
  int m = s2.size();
  vector<vector<int> > dp(n,vector<int> (m,-1));
  cout<<LCS(s1,s2,idx1,idx2,dp);
  return 0;
}