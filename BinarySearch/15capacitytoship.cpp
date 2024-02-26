#include<bits/stdc++.h>
using namespace std;

bool findMinDays(vector<int> &arr,int days,int x){
    int n = arr.size();
    int sum = 0;
    int count = 0;
    // for(int i=0;i<n;++i){
    //   if(arr[i]>x) return false;
    // }
    for(int i=0;i<n;++i){
        sum += arr[i];
        if(sum<=x){
            // ok
        }
        else{
            count++;
            sum = 0;
            i--;
        }
    }
    if(sum>0) count++;
    return count<=days? true: false;
    // if(count<=days) return true;
    // return false;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    // int ans = 0;
    while(low<=high){
        int mid = low + (high - low)/2;
        bool possible = findMinDays(weights,days,mid);
        // cout<<mnDays;
        if(possible){
            // ans = mid;
            // go for least days
            high = mid -1;
        }
        else{
            // not possible go right then
            low = mid + 1;
        }
    }
    return low;
}

int main(){
  vector<int> wt = {1,2,3,1,1};
  int days = 4;
  cout<<shipWithinDays(wt,days);
  return 0;
}