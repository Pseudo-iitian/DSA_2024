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


void f(int ind,string empty,string &digits,map<char,string> &mp,int i){
  int n = digits.size();
  if(ind>=n){
    for(auto &val: empty){
      cout<<val<<" ";
    }
    cout<<endl;
    // i++;
    return;
  }

  // pick 
  empty.push_back(mp[digits[ind]][i]);
  f(ind+1,empty,digits,mp,i);

  // not pick
  empty.pop_back();
  f(ind+1,empty,digits,mp,i+1);
}

vector<string> letterCombinations(string digits) {
  map<char,string> mp;
  mp['2'] = "abc";
  mp['3'] = "def";
  mp['4'] = "ghi";
  mp['5'] = "jkl";
  mp['6'] = "mno";
  mp['7'] = "pqrs";
  mp['8'] = "tuv";
  mp['9'] = "wxyz";

  // calling another fuction here
  int ind =0;
  string empty;
  f(ind,empty,digits,mp,0);

  return {"fda"};
}

int main() {
  fastio
  letterCombinations("23");
  return 0;
}