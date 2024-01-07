#include<bits/stdc++.h>
using namespace std;

void findOccurence(int ind, vector<int> &arr, vector<int> &emp,int target,vector<vector<int> > &ans){
    int n = arr.size();
    if (ind==n){
        if(target==0){
            ans.push_back(emp);
        }
        return;
    }

    if(arr[ind]<=target){
        // pick 
        emp.push_back(arr[ind]);
        findOccurence(ind,arr,emp,target-arr[ind],ans);
        // not pick
        emp.pop_back(); 
    }
    findOccurence(ind+1,arr,emp,target,ans);
}   

int main(){
    vector<int> arr = {2,3,6,7};
    vector<int> emp;
    int target = 7;
    vector<vector<int> > ans;
    findOccurence(0,arr,emp,target,ans);
    for(int i=0;i<ans.size();++i){
        for(auto &val: ans[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}