#include<string> 
#include<iostream> 

#include "People.h"
#include "Birthday.h"

using namespace std; 

// composition : using object of other classes in your class 

People::People(string n, Birthday b)
// for working with objects of a class inside
// other class use member initializer list
: name(n), dob(b)
{
}

void People::printInfo(){
    cout<<name<<" was born on ";
    dob.printDate();
}