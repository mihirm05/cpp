#include<iostream> 
#include<string> 

#include "overload.h"

using namespace std; 

int main(){ 
    // creating one object with 50 
    Overload o1(70);

    // creating another object with 30
    Overload o2(30);

    // creating one more empty object
    Overload o3;

    // + has been overloaded to add objects now
    o3 = o1 + o2;

    // alternate method to write the previous line 
    // o3 = o1.operator+(o2);

    cout<<o3.num<<endl;

}