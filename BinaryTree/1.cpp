#include<iostream>
using namespace std;
#include<bits/stdc++.h>

vector<int> getCount(vector<int> arr) {
    int n = arr.size();
    vector<int> divisors;
    vector<int> multiples;
    for(int i=0;i<arr.size();++i){
        int div = 0;
        for(int j = 0;j<arr.size();++j){
            if(arr[i]%arr[j]==0 && i!=j){
                div++;
            }
        }
        divisors.push_back(div);
    }
    for(int i=0;i<arr.size();++i){
        int mul = 0;
        for(int j = 0;j<arr.size();++j){
            if(arr[j]%arr[i]==0 && i!=j){
                mul++;
            }
        }
        multiples.push_back(mul);
    }
    vector<int> res;
    for(int i=0;i<n;++i){
        int sum = divisors[i]+multiples[i];
        res.push_back(sum);
    }
    return res;
}

int main(){
    vector<int> arr = {5,10,10,10,10,10};
    vector<int> res = getCount(arr);
    for(auto &val: res){
        cout<<val<<" ";
    }
    return 0;
}