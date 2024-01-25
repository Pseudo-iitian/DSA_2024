#include<bits/stdc++.h>
using namespace std;
int floorValueOf(vector<int> arr,int n,int x){
	int ans = -1;
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]<=x){
			ans = mid;
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return ans;
}
int ceilValueOf(vector<int> arr, int n,int x){
	// lowerbound - ceil value
	int ans = -1;
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]>=x){
			high = mid-1;
			ans = mid;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int> ans;
	int first = floorValueOf(a, n,  x);
	int second = ceilValueOf(a, n, x);
	int f=-1,s=-1;
	if(first!=-1) f= a[first];
	if(second!=-1) s = a[second];
	ans = {f,s};
	return ans;
}

int main(){
  vector<int> arr = {1,3,7,9};
	int n = arr.size();
	cout<<floorValueOf(arr,n,8)<<endl;
	cout<<ceilValueOf(arr,n,8);
  return 0;
}