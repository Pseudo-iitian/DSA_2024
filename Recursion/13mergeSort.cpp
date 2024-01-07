#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    // first - low..mid
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    // second - mid+1..high
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i=low;i<=high;++i){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr = {2,4,5,6,3,2,6,8,4};
    int low = 0;
    int high = arr.size()-1;
    mergeSort(arr,low,high);

    for(auto &val:arr){
        cout<<val<<" ";
    }
    return 0;
}