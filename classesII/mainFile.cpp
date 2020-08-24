#include<iostream>
#include<string>
#include "Print.h"

using namespace std;

int main(){
    // creating object of class Printer
    Print p;
    // creating pointer of class Pointer
    Print *pPointer = &p;

    // using object to access Printer class function 
    p.write();

    // using arrow member selection selection operator to access Printer class function
    pPointer->write();
}