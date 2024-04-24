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

vector<int> prevSmaller(vector<int> &heights){
    stack<int> st;
    vector<int> res;
    st.push(-1);
    stack<int> prev;
    for(int i=0;i<heights.size();++i){
        int curr = heights[i];
        while(curr<=st.top()){
            st.pop();
            if(!prev.empty()) prev.pop();
        }
        if(st.top()==-1) res.push_back(st.top());
        else res.push_back(prev.top());
        st.push(curr);
        prev.push(i);
    }
    return res;
}

vector<int> nextSmaller(vector<int> &heights){
    stack<int> st;
    vector<int> res(heights.size());
    stack<int> prev;
    st.push(-1);
    for(int i=heights.size()-1;i>=0;--i){
    	int curr = heights[i];
    	while(curr<=st.top()){
    		st.pop();
    		if(!prev.empty()) prev.pop();
    	}
    	if(st.top()==-1) res[i]=st.top();
    	else res[i]=prev.top();
    	st.push(curr);
    	prev.push(i);
    }
    for(int i=0;i<res.size();++i){
    	if(res[i]==-1) res[i]=heights.size();
    }
    return res;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);
    int mxArea = INT_MIN;
    for(int i=0;i<heights.size();++i){
    	int area = heights[i]*(next[i]-prev[i]-1);
    	if(area>mxArea) mxArea = area;
    }
    return mxArea;
}


int main() {
  fastio
  vector<vector<int> > matrix = {{0,0,1,1,0,1},{1,1,1,1,0,1},{1,1,1,0,1,0},{0,1,1,1,1,0},{1,0,1,1,1,1},{1,1,1,1,1,1}};
  int r = matrix.size();
  int c = matrix[0].size();
  // worst case - O(r*c);
  vector<int> heights;
  for(int i=0;i<c;++i){
    int one = 0;
    for(int j=r-1;j>=0;--j){
      if(matrix[i][j]!=0){
        one++;
      }
    }
    heights.push_back(one);
  }

  cout<<largestRectangleArea(heights);
  return 0;
}