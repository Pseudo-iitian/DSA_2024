#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int n,int i){
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

void buildHeap(int arr[],int n){
  for(int i=n/2; i>0; --i){
    maxheapify(arr,n,i);
  }
}


void heapSort(int arr[],int n){
  int index = n;
  while(n!=1){
    swap(arr[1],arr[index]);
    index--;
    n--;
    maxheapify(arr,n,1);
  }

}
int main(){
  // is zero base index, so we have to push -1 at teh first element
  int arr[] = {-1, 50,60,70,80,90,10,12,15,11,13,8,6,2};
  int n = sizeof(arr)/sizeof(int);


  // build heap is compulsory to do heapsort ok ok thik hai 
  buildHeap(arr,n);
  heapSort(arr,n-1);
  for(int i=1;i<n;++i){
    cout<<arr[i]<<" ";
  }
  return 0;
}