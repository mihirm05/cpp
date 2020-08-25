#include<iostream>
#include<string> 
#include "Print.h"

using namespace std; 


// const functions can be used by any type of objects 
// const objects can only be modified by using const functions 

int main(){
    // create normal object 
    Print p;

    // invoke normal function using normal object
    p.printNormal("Calling normal function using normal object");

    // invoke constant function using normal object
    p.printConst("Calling constant function using normal object");

    // creating constant object 
    const Print pConst;

    // invoke normal function using constant object
    // pConst.printNormal("Calling normal function using constant object");
    
    // invoke constant function using constant object
    pConst.printConst("Calling constant function using constant object");
}   