#include<bits/stdc++.h> 

using namespace std; 

// <------------ Normal Use -------------->

#define lli long long int
#define alphabate "abcdefghijklmnopqrstuvwxyz"
#define number "0123456789"
#define setBit(x)  __builtin_popcount(x)
#define setBitll(x)  __builtin_popcountll(x)
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;

// <---------- STL Operations ---------->
#define pb push_back
#define ps push
#define pp pop
#define tp top
#define ins insert

// <---------- End of STL Operations ---------->

bool customComparator(const pair<lli, lli>& a, const pair<lli, lli>& b) {
    if (a.first == b.first) {
        return a.second > b.second;  
    }
    return a.first < b.first;  
}

// <------------ Functions --------------->
bool isPrime(lli n)
{
   
   if (n <= 1)
      return false;
 
   
   for (int i = 2; i <= n / 2; i++)
      if (n % i == 0)
         return false;
 
   return true;
}
lli gcd(lli a, lli b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

lli vecsum(vector<lli> v){
    lli sum=0; 
    for(auto it:v)
    sum+=it;

    return sum;
}

// <------------ End of Functions --------------->

// <------------------- Program ---------------------->
void mergerSort(vector<lli> &ip,lli s,lli e,lli &k){
  if(k<1 || s+1==e) return;
  k-=2;

  lli mid=s+(e-s)/2;
  swap(ip[mid],ip[mid-1]);
  mergerSort(ip,s,mid,k);
  mergerSort(ip,mid,e,k);
}

void solve(){
  lli n,k; cin>>n>>k;
  k--;

  vector<lli> ip(n,0); 
  for(lli i=0;i<n;i++) ip[i]=i+1; 
  mergerSort(ip,0,n,k); 

  if(k) { 
    cout<<-1<<endl;
    return;
  }

  for(auto it:ip) cout<<it<<" ";
}

// <--------------- Main Functions ---------------->
int main(){
   lli test=1; 
  //  cin>>test; 
   while(test--){
      solve();
   }
}