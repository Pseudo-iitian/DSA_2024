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

int possible(vector<int> &arr,int maxPages,int m){
  int n = arr.size();
  int sum = 0;
  int stud = 0;
  for(int i=0;i<n;++i){
    sum += arr[i];
    if(sum>maxPages){
      stud++;
      sum = 0;
      i--;
    }
  }
  if(sum>0) stud++;
  // if(stud>m) return 1; // move right
  // else if(stud<m) return -1; // move left
  // return 0; // ans 
  return stud;
}

int findPages(vector<int> &books,int m){
  int low = *max_element(books.begin(),books.end());
  int high = accumulate(books.begin(),books.end(),0);
  int ans = -1;
  while(low<=high){
    int mid = low + (high-low)/2;
    int stud = possible(books,mid,stud);
    if(stud>m){
      // m = 4 but stud = 6 
      // stud increases - pages decreases
      // so we need to increase the page
      low = mid + 1;
    }
    else{
      high = mid -1;
    }
  }
  return low;
}

int main() {
  fastio
  vector<int> books = {25,46,28,49,24};
  int n = books.size();
  int stud = 4;
  cout<<findPages(books,stud);
  return 0;
}