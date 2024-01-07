#include<bits/stdc++.h>
using namespace std;

int count(int ind,vector<int> arr,int sum,int k){
    int n = arr.size();
    if(ind>=n){
        if(sum==k){
            return 1;
        }
        else return 0;
    }

    // emp.push_back(arr[ind]);
    sum+=arr[ind];
    int l = count(ind+1,arr,sum,k);

    // emp.pop_back();
    sum-=arr[ind];
    int r = count(ind+1,arr,sum,k);
    return l+r;
}
int main(){
    vector<int> arr = {1,2,3};  
    int k = 3;
    int ind = 0;
    vector<int> empty;
    int sum = 0;
    cout<<count(ind,arr,sum,k)<<endl;
    return 0;
}