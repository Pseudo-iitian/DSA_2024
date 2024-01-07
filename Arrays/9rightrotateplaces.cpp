#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int n = nums.size();
    int k = 2;
    // rotating it right by k places
    k = k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    for(auto &val: nums){
        cout<<val<<" ";
    }
    return 0;
}