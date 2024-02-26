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

vector<bool> sieve(int n){
  // this is segmented sieve of eratosthenease
  // [10^4, 10^6];
  // when there is small range, but it is very high 10^14 
  // but range is  = r-l+1  = 10^6 - 1-^4 + 1 = 10^2 
  // at the range of 10^7 we can use segement sieve***

  vector<bool> isPrime(n+1,true);
  isPrime[0]= isPrime[1] = false;
  for(int i=2;i*i<=n;++i){
    if(isPrime[i]){
      for(int j=i*i;j<=n;++j){
        isPrime[j]=false;
      }
    }
  }
  return isPrime;
}

vector<bool> getPrimesInRange(long long L, long long R){
  vector<bool> prime = sieve(sqrt(R)); // finding primes from 1 to sqrt(R)
  vector<bool> isPrime(R-L+1,true);

  for(long long i=2;i*i<=R;++i){
    if(!isPrime[i]) continue;
    for(long long j = max(i*i,(L+i-1)/(i*i));j<=R; j+=i){
      isPrime[j-L] = false;
    }
  }
  if(L==1) isPrime[0] = false;
  return isPrime;
}

int main() {
  fastio
  vector<bool> primesInRange = getPrimesInRange(1,5);
  for(int i=0;i<primesInRange.size();++i){
    if(primesInRange[i]) cout<<i+40<<" ";
  }
  return 0;
}