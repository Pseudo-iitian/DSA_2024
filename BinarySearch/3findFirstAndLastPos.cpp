#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = lower_bound(arr.begin(),arr.end(),k)-arr.begin();
    int second = upper_bound(arr.begin(),arr.end(),k)-arr.begin();
    if(first==n || arr[first]!=k) return {-1,-1};
    return {first,second-1};
}

int main(){
  vector<int> arr = {1,2,2,2,3,4,5};
  int n = arr.size();
  int k = 1;
  pair<int,int> p = firstAndLastPosition(arr,n,k);
  cout<<p.first<<" "<<p.second;
  return 0;
}     