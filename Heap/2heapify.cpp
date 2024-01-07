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
int main(){
  int arr[] = {0,12,50,60,30,40,52};
  int n = sizeof(arr)/sizeof(int);

  maxheapify(arr,n,1);
  for(int i=1;i<n;++i){
    cout<<arr[i]<<" ";
  }
  return 0;
}