#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = lower_bound(arr.begin(),arr.end(),k)-arr.begin();
    int second = upper_bound(arr.begin(),arr.end(),k)-arr.begin();
    if(arr[first]!=k) first = -1;
    if(arr[second-1]==k){
        second = second-1;
    }
    else if(arr[second]!=k) second = -1;
    pair<int,int> ans = {first,second};
    return ans;
}

int main(){
  
  return 0;
}