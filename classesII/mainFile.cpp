#include<iostream>
#include<string>
#include"classFile.h"

using namespace std;


int main(){
    Print p;
    string st;

    cout<<"Enter the string to be printed: "<<endl;
    getline(cin, st);
    p.print(st);    
}
