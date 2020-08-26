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
Overload Overload::operator+(Overload o){
    
    Overload newOverload;

    // in this context "num" belongs to o1
    // "o.num" belongs to o2 
    // newOverload is stored in o3 
    
    cout<<"num: "<<num<<endl;
    cout<<"o.num: "<<o.num<<endl;
    newOverload.num = num + o.num;
    return(newOverload);
}