#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=1;i*i<=n;++i){
        if(n%i==0){
            cout<<i<<" ";
            if(n%(n/i)==0){
                cout<<(n/i)<<" ";
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}