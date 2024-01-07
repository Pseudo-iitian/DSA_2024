#include<bits/stdc++.h>
using namespace std;

void findSubseq(int ind,int sum, vector<int> &arr, vector<int> &ans){
    int n = arr.size();
    if(ind==n){
        ans.push_back(sum);
        return;
    }
    // pick 
    sum += arr[ind];
    findSubseq(ind+1,sum,arr,ans);

    // not pcik
    sum -= arr[ind];
    findSubseq(ind+1,sum,arr,ans);
}
int main(){
    int n = 2;
    vector<int> arr = {1,2,1};
    int sum = 3;
    vector<int> ans;
    findSubseq(0,0,arr,ans);    
    sort(ans.begin(),ans.end());
    for(auto &val: ans){
        cout<<val<<" ";
    }   
    return 0;
}