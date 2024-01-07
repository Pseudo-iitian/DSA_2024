// largest element in an array
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={3,2,1,5,6,4};
    int n = sizeof(arr)/sizeof(int);

    // 1- sort and the last will be maximum and O(nlog(n)) - bruteforce
    sort(arr,arr+n); 
    cout<<"the largest element is : "<<arr[n-1]<<endl;

    // 2- comparing it with some INT_MIN value and updating it to get maximum number and O(n) - optimal
    int largest = arr[0];
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest element is: "<<largest<<endl;
    return 0;
}