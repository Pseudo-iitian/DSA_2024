#include<iostream>
using namespace std;

int main(){
    // checking if the array is sorted or not
    // int arr[]={1,2,2,3,3,4};
    int arr[]={1,2,1,2,4,2};
    int n = sizeof(arr)/sizeof(int);

    int flag=1; // means array is sorted
    for(int i=0;i<n-1;++i){
        if(arr[i+1]<arr[i]){
            flag=0;
            break;
        }
    }   
    if(flag) cout<<"Array is sorted"<<endl;
    else cout<<"array is not sorted"<<endl;
    return 0;
}