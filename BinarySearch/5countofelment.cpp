#include<bits/stdc++.h>
using namespace std;

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

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int,int> ans = firstAndLastPosition(arr, n, x);
	if(ans.first==-1) return 0;
	return (ans.second-ans.first)+1;
}	


int main(){
  vector<int> arr = {1,4,5,9};
  int n = arr.size();
  int k = 10;
  pair<int,int> ans = firstAndLastPosition(arr,n,k);
  cout<<ans.first<<" "<<ans.second;
  return 0;
}