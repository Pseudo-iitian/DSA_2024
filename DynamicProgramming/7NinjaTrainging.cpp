#include <bits/stdc++.h>
using namespace std;

int f(int day,int last,vector<vector<int>> &nums,vector<vector<int>> &dp){
    if(day==0){
        int mx = 0;
        for(int i=0;i<3;++i){
            if(i!=last) mx = max(mx,nums[0][i]);
        }
        return mx;
    }

    if(dp[day][last]!=-1) return dp[day][last]; 

    int mx = 0;
    for(int i=0;i<3;++i){
        if(i!=last){
            int point = nums[day][i] + f(day-1,i,nums,dp);
            mx = max(mx,point);
        }
    }
    return dp[day][last] = mx;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    // using recursion then memoization for overlapping sub problem if i see
    vector<vector<int>> dp(n,vector<int> (4,-1));
    return f(n-1,3,points,dp);
}