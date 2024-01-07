#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    // remove duplicates from a sorted array
    int arr[]={1,1,2,2,3,3,3,4,5,6,6};
    int n = sizeof(arr)/sizeof(int);    

    //1 bruteforce approach
    set<int> st;
    for(int i=0;i<n;++i){
        st.insert(arr[i]);
    }
    cout<<"there are "<<st.size()<<" elements are unique "<<endl;

    //2- better approach
    int i=0;
    int j=1;
    while(j<n){
        // arr[i] are you different then me
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        else{
            j++;
        }
    }
    cout<<"there are "<<i+1<<" elements are unique "<<endl;
    return 0;
}