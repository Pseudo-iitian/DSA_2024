#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
using namespace std;
 
int isKeyword(char buffer[]){
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
    "do","double","else","enum","extern","float","for","goto",
    "if","int","long","register","return","short","signed",
    "sizeof","static","struct","switch","typedef","union",
    "unsigned","void","volatile","while"};
    int i, flag = 0;
    for(i = 0; i < 32; ++i){
    if(strcmp(keywords[i], buffer) == 0){
    // Ezoic
    flag = 1;
    break;
    }
    }
    return flag;
}
 
int main(){
    char ch, buffer[15], operators[] = "+-*/%=";
    ifstream fin("program.txt");
    int i,j=0;
    int totalCount = 0,oper = 0, punchutor = 0,identi = 0, keyword = 0, variable = 0;
    if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    while(!fin.eof()){
        ch = fin.get();
            
        for(i = 0; i < 6; ++i){
        if(ch == operators[i])
        cout<<ch<<" is operator\n";
        totalCount++;
        oper++;
        }
        
        if(isalnum(ch)){
            buffer[j++] = ch;
            variable++;
            totalCount++;
        }
        else if((ch == ' ' || ch == '\n') && (j != 0)){
            buffer[j] = '\0';
            j = 0;
            
        if(isKeyword(buffer) == 1)
            // cout<<buffer<<" is keyword\n";
            keyword++;
            totalCount++;
        }
        else{
            // cout<<buffer<<" is indentifier\n";
            identi++;
            totalCount++;
        }
    }
    cout<<"total number of tokens is "<<totalCount<<endl;
    fin.close();
return 0;
}