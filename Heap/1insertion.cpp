#include<bits/stdc++.h>
using namespace std;

class Heap{
  public:
    int arr[101];
    int size;
    // we are using max heap
    Heap(){
      size = 0;
    }
    void insert(int value){ // tc - O(log(n)) for each elemenet
      // inserting at the end;
      size += 1;
      int index = size;
      arr[size] = value;

      // putting value at its correct position
      // 1 is root index, if index ==1 means 0 is root index which is false
      while(index > 1){
        int parentIndex = index/2;
        if(arr[index] > arr[parentIndex]){
          swap(arr[index],arr[parentIndex]);
          index = parentIndex;
        }
        else{
          break;
        }
      }
    }

    // deletion operations
    // 1- replace top element with last element
    // 2- put the root element or top element at correct position
    void deleteTop(){
      // replace the top element with last element
      int index = 1;
      arr[index]=arr[size];
      size = size - 1;

      // correct position
      while(index<=size){
        int left = 2*index;
        int right = 2*index + 1;
        int largest = index;
        if(left <= size && arr[largest] < arr[left]){
          largest = left;
        }
        if(right<=size && arr[largest]<arr[right]){
          largest = right;
        }

        if(largest==index){
          // value is at correct position
          // cout<<"yes equal"<<endl;
          return;
        }
        else{
          swap(arr[index],arr[largest]);
          index = largest;
        }
      }
    }
    void print(){
      for(int i=1;i<=size;++i){
        cout<<arr[i]<<" ";
      }
    }
};


int main(){
  Heap root;
  root.insert(100);
  root.insert(50);
  root.insert(99);
  root.insert(40);
  root.insert(45);
  root.insert(98);
  root.insert(2);
  root.print();
  cout<<endl;
  root.deleteTop();
  root.deleteTop();
  root.deleteTop();
  root.deleteTop();
  root.deleteTop();
  root.print();
  return 0;
}