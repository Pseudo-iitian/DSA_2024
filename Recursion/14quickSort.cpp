#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    // choosing first element as pivot
    int pivot = arr[low];
    int count = 0;
    for(int i=low+1;i<=high;++i){
        if(arr[i]<=pivot) count++;
    }
    // pivot index is 
    int pivotIndex = low + count;
    // placing that picot at its place
    // smaller on left side and larger on right side ( ascending order )
    swap(arr[low],arr[pivotIndex]); 

    int i=low,j=high;
    // going from i to pivot index and j to pivot index 
    while(i<pivotIndex && j>pivotIndex){
        
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}
void qs(vector<int> &arr,int low, int high){
    if(low>=high) return;
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        qs(arr,low,partitionIndex-1);   
        qs(arr,partitionIndex+1,high);
    }
}
int main(){
    vector<int> arr = {1,0,2};
    int low = 0;
    int high = arr.size()-1;
    qs(arr,low,high);
    for(auto &val: arr){
        cout<<val<<" ";
    }
    return 0;
}