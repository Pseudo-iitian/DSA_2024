#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // brute force  sorted is given
    int first[] = {1,2,2,3,3,4,5,6};
    int second[] = {2,3,3,5,6,6,7};
    int f = sizeof(first)/sizeof(int);
    int s = sizeof(second)/sizeof(int);
    vector<int> intersection;

    // for(int i=0;i<f;++i){
    //     for(int j=0;j<s;++j){
    //         if(first[i]==second[j]){
    //             intersection.emplace_back(first[i]);
    //             second[j]=INT_MIN;
    //             break;
    //         }
    //         if(second[j]>first[i]) break;
    //     }
    // }
    // for(auto &val: intersection){
    //     cout<<val<<" ";
    // }

    // 2- optimal approach is...
    int i=0,j=0;
    while(i<f && j<s){
        if(second[j]>first[i]){
            i++;
        }
        else if(first[i]==second[j]){
            intersection.push_back(first[i]);
            second[j]=-1;
            i++;j++;
        }
        else if(first[i]>second[j]){
            j++;
        }
    }
    for(auto &val: intersection){
        cout<<val<<" ";
    }
    return 0;
}