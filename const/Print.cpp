#include<iostream> 
#include<string> 
#include "Print.h"

using namespace std; 

// constructor for the class
Print::Print(){
}

// regular function 
void Print::printNormal(string s){
    cout<<s<<endl;
}

// constant function<s
void Print::printConst(string s) const{
    cout<<s<<endl;
}
