#include<bits/stdc++.h>
using namespace std;

void revers(int s, int e, vector<int> &arr){
    if(s>=e) return;
    swap(arr[s],arr[e]);
    revers(s+1,e-1,arr);
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int s  = 0;
    int e = arr.size()-1;
    revers(s,e,arr);
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}