#include<iostream>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // second largest element in an array
    int arr[]={3,2,1,4,5,7,7,7,7,6};
    int n = sizeof(arr)/sizeof(int);

    //1- sort and get the last smaller element than largest  and tc is O(nlog(n))+O(n) brute
    sort(arr,arr+n);
    int largest = arr[n-1];
    int secondlargest=-1;
    for(int i=n-1;i>=0;--i){
        if(arr[i]!=largest){
            secondlargest=arr[i];
            break;
        }
    }
    cout<<"the second largest element is : "<<secondlargest<<endl;

    //2- comparing it tc is : O(n)-finding largest element + O(n)-finding second largest elemeet - better
    int slargest = -1;
    for(int i=0;i<n;++i){
        // are you arr[i] is greater than slargest and not equal to largest value then update the slargest.
        // 1,2,4,7,7,5
        // -1
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    cout<<"The second largest element is : "<<slargest<<endl;

    // 3- omptimal approach
    slargest = INT_MIN;
    largest=INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<"The second largest element is: "<<slargest<<endl;
    return 0;
}