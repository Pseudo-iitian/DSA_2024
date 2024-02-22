#include<bits/stdc++.h>
using namespace std;

void solve(int idx,int arr[],int n,int empty[]){

  if(idx>=n){
    for(int i=0;i<n;++i){
      if(empty[i]!=-1) cout<<empty[i]<<" ";
    }
    cout<<endl;
    return;
  }

  empty[idx] = arr[idx];
  solve(idx+1,arr,n,empty);

  empty[idx]=-1;
  solve(idx+1,arr,n,empty);

  // TC - O(2^n * N)
  // SC - O(n)
}

int main(){
  int arr[] = {1,2,3};
  int n = 3;
  int emp[n];
  int size = 0;
  solve(0,arr,n,emp);
  return 0;
}