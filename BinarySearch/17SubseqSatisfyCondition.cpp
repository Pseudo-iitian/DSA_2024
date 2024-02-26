#include<bits/stdc++.h>
using namespace std;

int printSubsequences(vector<int> &arr,int target)
{
  int count = 0;
  int n= arr.size();
	/* Number of subsequences is (2**n -1)*/
	unsigned int opsize = pow(2, n);

	/* Run from counter 000..1 to 111..1*/
	for (int counter = 1; counter < opsize; counter++)
	{
    int mx = INT_MIN;
    int mn = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			/* Check if jth bit in the counter is set
				If set then print jth element from arr[] */
			if (counter & (1<<j)){
				// cout << arr[j] << " ";
        mn = min(mn,arr[j]);
        mx = max(mx,arr[j]);
      }
		}
    int sum = mn + mx;
    if(sum<=target){
      count++;
    }
	}
  return count;
}

int main(){
  // number of subsequence that satisfy the given condition  
  vector<int> arr = {3,5,6,7};
  int target = 9;
  cout<<printSubsequences(arr,target);
  return 0;
}