#include<bits/stdc++.h>
using namespace std;

bool printS(int ind,vector<int> arr,vector<int> empty, int k,int sum){
    int n = arr.size();
    if(ind>=n){
        if(sum==k){
            for(auto val:empty) cout<<val<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }

    empty.push_back(arr[ind]);
    sum += arr[ind];
    if(printS(ind+1,arr,empty,k,sum)==true) return true;

    empty.pop_back();
    sum -= arr[ind];
    if(printS(ind+1,arr,empty,k,sum)== true) return true;
    return false;
}
int main(){
    vector<int> arr = {1,2,3};  
    int k = 1;
    int ind = 0;
    vector<int> empty;
    int sum = 0;
    printS(ind,arr,empty,k,sum);
    return 0;
}