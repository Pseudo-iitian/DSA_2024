#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

  // prime number - A number 'n' is prime, if it is divisible by 1 & n.
  // prime number - A number 'n' is prime, if it is not divisible by any number from 2 to n-1

bool isPrime(int n){
  if(n==1) return false;
  for(int i=2;i<n;++i){
    if(n%i==0) return false;
  }
  return true;

  // TC - O(n)
  // SC - O(1);
}

// n = 36;
// 1 2 3 4 6 9 12 18 36
//         ^
// 1*36 = 2*18 = 3*12 = 3*9 = 6*6

// n = 12 
// 1 2 3 4 6 12
// 1*12 = 2*6 = 3*4 

// i.e.i = 2 to =sqrt(n);
// if(n%i==0) return false;

bool newIsPrime(int n){
  if(n==1) return false;
  for(int i=2;i*i<=n;++i){
    if(n%i==0) return false;
  }
  return true;
}

// TC = O(sqrt(n));

int main() {
  fastio
  int n = 5;
  cout<<isPrime(n);
  return 0;
}