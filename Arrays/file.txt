#include<iostream>
using namespace std;

//  array init here will with 0 value
int arr[6];

// max length of array here globally is 10^7
int N = 1e7;
int main(){
    // array declare here will be initialized with some garbage value
    int brr[6];

    cout<<"arr is here..."<<endl;
    for(int i=0;i<6;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"brr is here..."<<endl;
    for(int i=0;i<6;++i){
        cout<<brr[i]<<" ";
    }

    int n = 1e6;
    // max length of array here is 10^6 inside main()
    return 0;
}