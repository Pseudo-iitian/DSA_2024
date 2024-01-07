#include<iostream>
using namespace std;

// int count = 0;
// void print(string &name){
//     if(count==6) return;
//     cout<<name<<endl;
//     count++;
//     print(name);
// }

void print(string name,int count){
    if(count==0) return;
    cout<<name<<endl;
    print(name,count-1);
}
int main(){
    string name = "abhishek";
    int count = 5;
    print(name,count);

    return 0;
}