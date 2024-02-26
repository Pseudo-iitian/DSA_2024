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

vector<int> sieve(int n){
  vector<int> isPrime(n+1,true);
  isPrime[0] = isPrime[1]=false;
  for(int i=2;i<=n;++i){
    if(isPrime[i]){
      for(int j=i*i;j<=n;j+=i){
        isPrime[j]=false;
      }
      // takes log(n) time complexity
    }
  }
  // totoal O(nlog(n)) time complexity in the worst case
  // acutally it is - O(nlog(log(n)))
  return isPrime;
}

vector<int> printPrimes(int n){
  vector<int> isPrime(n+1,true);
  isPrime[0] = isPrime[1]=false;
  for(int i=2;i*i<=n;++i){
    if(isPrime[i]){
      for(int j=i*i;j<=n;j+=i){
        isPrime[j]=false;
      }
    }
  }
  // more precisely time complexity is - O(n* log (log(sqrt(n))))
  return isPrime;
}


int main() {
  fastio
  // printing prime numbers from 1 to n, 
  // to check if it is prime or not - O(sqrt(n))
  // for n numbers -> tc - n(sqrt(n)) 
  // we have to optimize this using sieve of eratosthenease
  // better is O(nlog(n))

  vector<int> primes = sieve(100);
  int cnt = 0;
  for(int i=0;i<primes.size();++i){
    if(primes[i]==1){
      cout<<i<<" ";
      cnt++;
    }
  }
  cout<<endl;
  cout<<cnt<<endl;
  return 0;
}