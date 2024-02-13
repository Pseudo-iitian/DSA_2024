#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr,int x){
  int res = 0;
  int n = arr.size();
  for(int i=0;i<n;++i){
    int top = ceil((double)arr[i]/(double)x);
    res += top;
  }
  return res;
}
int minEatingSpeed(vector<int>& piles, int h) {
  int n = piles.size();
  int low = 1;
  int high = *max_element(piles.begin(),piles.end());
  while(low<=high){
    int mid = low + (high-low)/2;
    int val = sum(piles,mid);
    if(val<=h){
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return low;
}

int main(){
  vector<int> piles = {1000000000,1000000000};
  int n = piles.size(); 
  int h = 3;
  // int x = 4;
  // cout<<sum(piles,x);
  cout<<minEatingSpeed(piles,h);
  return 0;
}