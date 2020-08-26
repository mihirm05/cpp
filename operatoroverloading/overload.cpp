#include<iostream> 
#include<string> 

#include "overload.h"

using namespace std; 

// constructor one does nothing
Overload::Overload(){
}

// constructor two initializes the class variable
Overload::Overload(int a){
    num = a;
}

// the function "operator+" has a return type of "Overload"
// The operator+ function is the same as "add +(2,2)" 
// which is the same as "2+2", except "operator+" is having 
// one value passed to it and is taking another from another 
// function (num=a in Overload::Overload (int a))
Overload Overload::operator+(Overload o){
    
    Overload newOverload;

    // in this context "num" belongs to o1
    // "o.num" belongs to o2 
    // newOverload is stored in o3 
    newOverload.num = num + o.num;
    return(newOverload);
}