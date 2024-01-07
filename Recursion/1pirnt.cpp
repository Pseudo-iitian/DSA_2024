#include<iostream>
using namespace std;

int n = 0;
void f(){
    if(n==3) return;
    cout<<n<<endl;
    n++;
    f();
}
int main(){
    f();
    return 0;
}