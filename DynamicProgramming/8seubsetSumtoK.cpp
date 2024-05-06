#include<bits/stdc++.h>
using namespace std;

int flag = 0;

void ksubsequence(int ind,vector<int> &arr,int k,int sum){
  int n = arr.size();
  if(ind>=n){
    if(sum==k){
        flag = 1;
    }
    return;
  }
  //pick
  // empty.push_back(arr[ind]); // take
  sum+=arr[ind];
  ksubsequence(ind+1,arr,k,sum);
  // empty.pop_back(); // not take
  sum-=arr[ind];
  ksubsequence(ind+1,arr,k,sum);
}
int main(){
  vector<int> ans = {1,2,1};
  int k = 2; // find that subset whose sum = k;
  ksubsequence(0,ans, k,0);

  if(flag) cout<<"yes"<<endl;
  else cout<<"no"<<endl;

  return 0;
}