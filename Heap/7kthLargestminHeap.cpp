#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int> > pq;
        for(int i=0;i<k;++i){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();++i){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};

int main(){
  Solution s;
  vector<int> nums = {3,11,6,9,4,12,2,8};
  int k = 5; 
  cout<<s.findKthLargest(nums,k);
  return 0;
}
