#include<iostream>
#include <vector>
#include <map>
using namespace std;


// ni smjh aaya mujhe
int solve(vector<int> &arr, int target) {
    int n = arr.size();
    map<int, int> mp;
    for (auto &val : arr) {
        mp[val]++;
    }
    int ans = 0;
    for (auto &val : mp) {
        int rq = target - val.first;
        int freq = mp[rq];
        if (rq == val.first) {
            ans += (val.second * (val.second - 1)) / 2; // Count combinations
        } else {
            ans += val.second * freq;
        }
    }
    return ans;
}

int main(){
  vector<int> arr = {1,4,4,5,6,7,8};
  int target = 9;
  cout<<solve(arr,target);
  return 0;
}