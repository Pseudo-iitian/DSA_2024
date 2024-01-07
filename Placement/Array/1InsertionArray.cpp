#include<bits/stdc++.h>
using namespace std;



void insertAt(int arr[],int pos,int var,int &size){
  if(size>=10){
    cout<<"out of bound, you can't enter any more now"<<endl;
    return;
  }
  if(pos<0){
    cout<<"position can't be negative"<<endl;
    return;
  }
  else if(pos>=10){
    cout<<"position can't go outside the box"<<endl;
    return;
  }
  for(int i=size-1;i>=pos-1;--i){
    arr[i+1]=arr[i];
  }
  arr[pos-1]=var;
  size++;
}

void deleteAt(int arr[],int pos,int &size){
  if(size<=0){
    cout<<"array is now completely empty"<<endl;
    return;
  }
  if(pos<0){
    cout<<"please enter a valid position"<<endl;
    return;
  }
  if(pos>size){
    cout<<"position can't be negative"<<endl;
    return;
  }
  for(int i=pos-1;i<size-1;++i){
    arr[i]=arr[i+1];
  }
  arr[size-1]=0;
  size--;
}

void print(int arr[],int n){
  for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
  }
}

int main(){
  // to insert at scecific poition
  int arr[10];
  int size = 5;
  for(int i=0;i<size;++i){
    arr[i]=i+1;
  }
  // insertAt(arr,2,23,size);
  // insertAt(arr,3,32,size);
  // insertAt(arr,3,23,size);
  // insertAt(arr,3,11,size);
  // insertAt(arr,3,14,size);
  // insertAt(arr,3,12,size);
  deleteAt(arr,2,size);
  deleteAt(arr,2,size);
  deleteAt(arr,2,size);
  deleteAt(arr,2,size);
  deleteAt(arr,1,size);
  deleteAt(arr,1,size);
  print(arr,size);
  return 0;
}