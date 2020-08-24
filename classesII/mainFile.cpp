#include<iostream>
#include<string>
#include "Print.h"

using namespace std;

int main(){
    // creating object of class Printer
    Print p;
    string s;

    cout<<"Enter the desired string: "<<endl;
    getline(cin,s);

    // creating pointer of class Pointer
    Print *pPointer = &p;

    // using object to access Printer class function 
    cout<<"Using object"<<endl;
    p.write(s);

    // using arrow member selection selection operator to access Printer class function
    cout<<"Using arrow member selection operator"<<endl;
    pPointer->write(s);
}