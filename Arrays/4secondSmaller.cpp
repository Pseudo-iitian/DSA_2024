#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // second smallest element in an arrray
    int arr[]={5,7,7,4,2,1};
    int n = sizeof(arr)/sizeof(int);
    int smaller = INT_MAX;
    int ssmaller = INT_MAX;
    for(int i=0;i<n;++i){
        if(arr[i]<smaller){
            ssmaller=smaller;
            smaller=arr[i];
        }
        else if(arr[i]>smaller && arr[i]<ssmaller){
            ssmaller=arr[i];
        }
    }
    cout<<"the second smallest element is: "<<ssmaller<<endl;
    return 0;
}