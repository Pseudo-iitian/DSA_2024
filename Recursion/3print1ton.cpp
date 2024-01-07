#include<iostream>
using namespace std;

// int i=1;
// void print(int n){
//     if(i==n+1) return;
//     cout<<i<<endl;
//     i++;
//     print(n);
// }

// 1 to n
// void print(int start,int n){
//     if(start==n+1) return;
//     cout<<start<<endl;
//     print(start+1,n);
// }

// n to 1
void print(int start,int n){
    if(start==n+1) return;
    print(start+1,n);
    cout<<start<<endl;
}

int main(){
    int n = 5;
    int start = 1;
    print(start,n);
    return 0;
}