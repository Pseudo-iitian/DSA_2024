#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int m,n,k;
    cin>>m>>n>>k;
    
    vector<vector<int>> matrix(m+1,vector<int> (n+1,0));
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            int a;
            cin>>a;
            matrix[i][j]=a;
        }
    }
    
    vector<vector<int>> pref(m+1,vector<int> (n+1,0));
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            pref[i][j] = matrix[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }
    
    vector<vector<int>> ans(m+1,vector<int> (n+1,0));
    // for(int i=1;i<=m;++i){
    //     for(int j=1;j<=n;++j){
    //         int x1 = i-k;
    //         int x2 = i+k;
    //         if(x1<=0) x1 = 1;
    //         if(x2>m) x2 = m;
            
    //         int y1 = j-k;
    //         int y2 = j+k;
    //         if(y1<=0) y1 = 1;
    //         if(y2>n) y2 = n;
            
    //         int sum = pref[x2][y2] - pref[x1][y2] - pref[x2][y1] + pref[x1][y1];
    //         ans[i][j]=sum;
    //     }
    // }
    int x1 = 1;
    int x2 = 2;
    int y1 = 1;
    int y2 = 2;
    int sum = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
    cout<<sum<<endl;
    // for(int i=1;i<=m;++i){
    //     for(int j=1;j<=n;++j){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}