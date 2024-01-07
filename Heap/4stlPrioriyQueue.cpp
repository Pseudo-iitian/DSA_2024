#include<bits/stdc++.h>
using namespace std;

int main(){
  priority_queue<int> pq;
  pq.push(1); 
  pq.push(2); 
  pq.push(3); 
  pq.push(4); 
  pq.push(5); 
  pq.push(6);

  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element of queue: "<<pq.top()<<endl;
  pq.pop();
  cout<<"size: "<<pq.size()<<endl;
  cout<<pq.empty()<<endl;
  if(pq.empty()){
    cout<<"heap is empty"<<endl;
  }
  else{
    cout<<"heap is not empty"<<endl;
  }
  return 0;
}