#include<bits/stdc++.h>
using namespace std;

unsigned long long nCr(int n,int r){
    if(r==0) return 1;
    unsigned long long res = 1;
    for(int i=1;i<=r;++i){
        res = res * (n--);
    }
    return res;
}
int main(){
    unsigned long long fact[21];
    fact[0]=1;
    for(int i=1;i<21;++i){
        fact[i]=fact[i-1]*i;
    }

    vector<int> ans;
    ans.push_back(1);
    int n = 33;
    for(int i=1;i<=n/2;++i){
        unsigned long long upper = nCr(n,i);
        unsigned long long lower = fact[i];
        int res = upper/lower;
        ans.push_back(res);
    }
    if(n&1){
        // n is odd
        for(int i=n/2;i>=0;--i){
            ans.push_back(ans[i]);
        }
    }
    else{
        for(int i=n/2-1;i>=0;--i){
            ans.push_back(ans[i]);
        }
    }
    cout<<nCr(33,14)/fact[14];
    return 0;
}