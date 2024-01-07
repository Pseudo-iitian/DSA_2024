#include<bits/stdc++.h>
using namespace std;

int main(){
  priority_queue<int,vector<int>, greater<int> > pq;
  pq.push(3);  
  pq.push(6);  
  pq.push(7);  
  pq.push(4);  
  pq.push(2);

  cout<<"top element: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element: "<<pq.top()<<endl;
  pq.pop();
  cout<<"top element: "<<pq.top()<<endl;
  pq.pop();

  cout<<"size: "<<pq.size()<<endl;
  if(pq.empty()){
    cout<<"pq is empty now"<<endl;
  }
  else{
    cout<<"pq is not empty yet"<<endl;
  }

  
  return 0;
}