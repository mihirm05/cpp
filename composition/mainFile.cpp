#include<iostream>
#include<string> 

#include "Birthday.h"
#include "People.h"

using namespace std; 

int main(){
    Birthday b(5, 12, 1995);
    People p("Mihir", b);
    p.printInfo();


}