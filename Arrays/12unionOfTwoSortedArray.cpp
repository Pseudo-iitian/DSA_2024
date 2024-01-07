#include<iostream>
#include<vector>
#include<set>
using namespace std;

void unionArr(){
    vector<int> a = {1,1,2,3,4,4,5};
    vector<int> b = {3,4,5,6};
    int n1 = a.size();
    int n2 = b.size();

    int i=0,j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}
int main(){
    // union of two sorted array
    // 1- brute forces solutions
    int a[]={1,1,2,3,4,5};
    int b[]={2,3,4,4,5,6};
    int asz = sizeof(a)/sizeof(int);
    int bsz = sizeof(b)/sizeof(int);
    // set<int> st;
    // for(int i=0;i<asz;++i){
    //     st.insert(a[i]);
    // }
    // for(int i=0;i<bsz;++i){
    //     st.insert(b[i]);
    // }
    // vector<int> ans(st.begin(),st.end());
    // for(auto &val: ans){
    //     cout<<val<<" ";
    // }

    // 2- optimal solution approach
    // in the funciton
    return 0;
}