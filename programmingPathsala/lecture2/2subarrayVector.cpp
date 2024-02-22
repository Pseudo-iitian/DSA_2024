#include<bits/stdc++.h>
using namespace std;


void print(vector<int> ans){
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

void subsequences(int ind, vector<int> empty,vector<int> &arr){
    int n = arr.size();
    if(ind>=n){
        print(empty);
        return;
    }

    subsequences(ind+1,empty,arr);

    // including
    empty.push_back(arr[ind]);
    subsequences(ind+1,empty,arr);

    // including 2 
    empty.push_back(arr[ind]);
    subsequences(ind+1,empty,arr);
}

int main(){
    // printing all the subsequences
    vector<int> arr = {1,2};
    int n = arr.size();
    vector<int> empty;
    int ind = 0;
    subsequences(ind,empty,arr);
    return 0;
}