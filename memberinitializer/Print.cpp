#include<iostream>
#include<string> 
#include "Print.h"

using namespace std; 

Print::Print(int a, int b) 
// initialization for constant member should be done here
:  regVar(a), constVar(b) 
{
    // regVar = a (initialization of regular variable 
    // can be done by the standard method as well)
}

void Print::process(){
    cout<<"regVar: "<<regVar<<endl;
    cout<<"constVar: "<<constVar<<endl;
}
