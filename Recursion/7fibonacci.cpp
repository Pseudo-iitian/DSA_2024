#include<bits/stdc++.h>
using namespace std;


void fib(int a,int b,int count ,int n){
    if(count>n) return;
    int sum = a+b;
    cout<<sum<<" ";
    fib(b,sum,count+1,n);
}

int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int a = 0;
    int b = 1;
    int n = 5;
    // cout<<a<<" "<<b<<" ";
    // fib(a,b,1,n-2);8
    cout<< fib(4);
    return 0;
}