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

bool cmp(pair<int,int> &a,pair<int,int> &b){
  int dis1 = pow(a.first,2)+pow(a.second,2);
  int dis2 = pow(b.first,2)+pow(b.second,2);
  return dis1<dis2;
}

int main() {
  fastio
  vector<pair<int,int>> arr = {{1,2},{2,3},{3,4},{2,0}};
  sort(arr.begin(),arr.end(),cmp);
  int k = 2;
  cout<<k<<" closest distance is: "<<endl;
  for(int i=0;i<k;++i){
    cout<<"X: "<<arr[i].first<<" Y: "<<arr[i].second<<endl;    
  }
  return 0;
}