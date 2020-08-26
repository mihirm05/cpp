#include<iostream> 
#include<string> 

#include "base.h"
#include "derived.h"

using namespace std; 

int main(){
    // creating object for base class
    Base b;
    b.print(); 

    // creating object for derived class
    Derived d; 
    d.print();

}