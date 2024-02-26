#include<bits/stdc++.h>
using namespace std;

int mostBooked(int n, vector<vector<int>>& meetings) {
  vector<int> countBooking(n,0);
  vector<pair<int,int>> rooms(n,{0,0});
  queue<pair<int,int> > jobs;

  for(auto &val: meetings){
    jobs.push({val[0],val[1]});
  }

  int time = 0;
  while(time<100){

    for(int i=0;i<n;++i){
      pair<int,int> &p = rooms[i];

      if(p.first==0 && p.second==0){
        auto top = jobs.front();
        jobs.pop();
        // rooms are empty
        p.first = top.first;
        p.second = top.second;
        countBooking[i]++;
      }
      else{
        // rooms are filled
        if(p.second==time){
          auto top = jobs.front();
          jobs.pop();
          p.first = top.first;
          p.second = top.second;
          // rooms have done with their jobs ith
          countBooking[i]++;
        }
      }

    }
    time++;
  }

}

int main(){
  int n = 2;
  vector<vector<int>> meetings = {{0,10},{1,5},{2,7},{3,4}};
  cout<<mostBooked(n,meetings);
  return 0;
}