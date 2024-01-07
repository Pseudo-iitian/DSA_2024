#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,0,2,0,0,0,3,2};
    int n = sizeof(arr)/sizeof(int);

    // maintain the relatice order
    //1 - bruteforce approach
    // vector<int> temp;
    // for(int i=0;i<n;++i){
    //     if(arr[i]){
    //         temp.push_back(arr[i]);
    //     }
    // }

    // int zeros = n - temp.size();

    // for(int i=0;i<temp.size();++i){
    //     arr[i]=temp[i];
    // }
    // for(int i=temp.size();i<n;++i){
    //     arr[i]=0;
    // }
    // for(auto val: arr){
    //     cout<<val<<" ";
    // }

    //2- better approach
    // 1,0,2,3,4,0,0,2,4
    
    int j = -1;
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    // if(j==-1) return; no need to do any thing
    for(int i=j+1;i<n;++i){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}