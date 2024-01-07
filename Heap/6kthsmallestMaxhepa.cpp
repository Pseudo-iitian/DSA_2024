#include<bits/stdc++.h>
using namespace std;
int main(){
  // kth element of an array using max heap property
  // 1- insert k elements in a heap (max heap) priority_queue 
  // 2- for reaming element
  // check for condition 
        // 1- top elemnt > arrayelement(curr)
          // then
            // 1- pop top element 
            // 2- insert that array element (curr)


  vector<int> arr = {3,11,6,9,4,12,2,8};
  int n = arr.size();
  priority_queue<int> pq;// max heap
  int k = 5; 
  for(int i=0;i<k;++i){
    pq.push(arr[i]);
  }
  for(int i=k;i<n;++i){
    if(arr[i]<pq.top()){
      pq.pop();
      pq.push(arr[i]);
    }
  }
  cout<<"kth element is: "<<pq.top()<<endl;
  return 0;
}