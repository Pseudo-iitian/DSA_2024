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


bool palindrome(string s){
  int low = 0;
  int high = s.size()-1;
  while(low<=high){
    if(s[low]!=s[high]){
      return false;
    }
    low++;
    high--;
  }
  return true;
}


vector<vector<string>> partition(string s) {
  
}
int main() {
  fastio
  string s= "aba";
  // cout<<palindrome(s);
  return 0;
}