#include<iostream> 
#include<string> 

#include "base.h"
#include "derived.h"

using namespace std; 

int main(){
    Base b;
    b.print(); 

    Derived d; 
    d.print();

}