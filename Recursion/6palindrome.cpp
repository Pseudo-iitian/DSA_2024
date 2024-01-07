#include<bits/stdc++.h>
using namespace std;

bool checkPal(int start, string s, int end){
    if(start>=end) return true;
    if(s[start]!=s[end]) return false;
    return checkPal(start+1,s,end-1);
}
int main(){
    string s = "ABBCA"; 
    int start = 0;
    int end = s.size()-1;
    cout<<checkPal(start,s,end);
    return 0;
}