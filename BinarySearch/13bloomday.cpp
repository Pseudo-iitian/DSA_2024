#include<bits/stdc++.h>
using namespace std;

int possible(vector<int> arr, int x,int k){
  int count = 0;
  int bouquets = 0;
  for(int i=0;i<arr.size();++i){
    if(arr[i]<=x){
      count++;
    }
    else{
      bouquets += count/k;
      count = 0;
    }
  }
  bouquets += count/k;
  return bouquets;
}

int minDays(vector<int>& bloomDay, int m, int k) {
  int n = bloomDay.size();
  if(m*k > n) return -1;
  int low = *min_element(bloomDay.begin(),bloomDay.end());
  int high = *max_element(bloomDay.begin(),bloomDay.end());
  int ans = -1;
  while(low<=high){
    int mid = low + (high-low)/2; // mid is min day
    int totalBouqets = possible(bloomDay,mid,k);
    if(totalBouqets>=m){
      ans = mid;
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return ans;
}

// tc - O(n*log2(max-min+1));

int main(){
  vector<int> bloomDay = {1,10,3,10,2};
  int m = 3;int k = 1;
  cout<<minDays(bloomDay,m,k);
  // cout<<calculate(bloomDay,10,k);
  return 0;
}