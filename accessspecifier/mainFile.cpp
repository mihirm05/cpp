#include<iostream> 
#include<string> 

#include "Base.h"
#include "Derived.h"

using namespace std;

int main(){
    // creating object for derived class
    Derived d;

    // accesing the variables
    // of the base class (public and protected)
    d.print();
}
