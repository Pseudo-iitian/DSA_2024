#include<iostream>
using namespace std;

int main(){
    // left rotate an array by just one place
    // 1- optimal approach
    int arr[]={1,2,3,4,5};
    int n = 5;
    int first = arr[0];
    for(int i=0;i<n-1;++i){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(auto &val: arr){
        cout<<val<<" ";
    }
 
    // 
    return 0;
}