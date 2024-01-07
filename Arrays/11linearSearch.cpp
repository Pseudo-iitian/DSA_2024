#include<iostream>
using namespace std;

int linearSearch(int arr[],int key,int n){
    for(int i=0;i<n;++i){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,5,6};
    int key = 3;
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,key,n);
    return 0;
}