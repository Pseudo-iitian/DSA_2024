#include<iostream>
using namespace std;

int main(){
    // left rotate array by kplaces left rotations
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    int temp[k];
    for(int i=0;i<k;++i){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;++i){
        arr[i-k]=arr[i];
    }
    int start = n-k;
    // int j = 0;
    for(int i=start;i<n;++i){
        // arr[i]=temp[j++];
        arr[i]=temp[i-(n-k)];
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}