#include<bits/stdc++.h>
using namespace std;

void ksubsequence(int ind,vector<int> &arr, vector<int> empty,int k,int sum){
    int n = arr.size();
    if(ind>=n){
        // int sum = accumulate(empty.begin(),empty.end(),0);
        if(sum==k){
            for(auto &val: empty){
                cout<<val<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick
    empty.push_back(arr[ind]); // take
    sum+=arr[ind];
    ksubsequence(ind+1,arr,empty,k,sum);
    empty.pop_back(); // not take
    sum-=arr[ind];
    ksubsequence(ind+1,arr,empty,k,sum);
}
int main(){
    vector<int> ans = {1,2,1};
    int k = 2;
    vector<int> empty;
    ksubsequence(0,ans,empty, k,0);
    return 0;
}