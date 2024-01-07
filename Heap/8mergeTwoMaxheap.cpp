#include<bits/stdc++.h>
using namespace std;

void maxheapify(vector<int> &arr,int n,int i){
  int index = i;
  int leftIndex = 2*i;
  int rightIndex = 2*i+1;
  int largest = index;
  if(leftIndex<n && arr[largest]<arr[leftIndex]){
    largest = leftIndex;
  }
  if(rightIndex<n && arr[largest]<arr[rightIndex]){
    largest = rightIndex;
  }

  if(index!=largest){
    swap(arr[index],arr[largest]);
    index = largest;
    maxheapify(arr,n,index);
  }
}

void buildHeap(vector<int> arr,int n){
  for(int i=n/2; i>0; --i){
    maxheapify(arr,n,i);
  }
}

void mergeTwoHeap(vector<int> &arr1, vector<int> &arr2){
  for(int i=0;i<arr2.size();++i){
    int val = arr2[i];
    arr1.push_back(val);
    maxheapify(arr1,arr1.size(),i);
  }
  // tc - nlogn
}
int main(){
  // is zero base index, so we have to push -1 at teh first element
  vector<int> arr1 = {-1, 50,8,6,2};
  vector<int> arr2 = {-1, 13,8,6,2};
  int n1 = arr1.size();
  int n2 = arr2.size();
  // build heap is compulsory to do heapsort ok ok thik hai 

  buildHeap(arr1,n1);
  buildHeap(arr2,n2);

  mergeTwoHeap(arr1,arr2);

  for(int i=0;i<n1;++i){
    cout<<arr1[i]<<" ";
  }
  
  return 0;
}