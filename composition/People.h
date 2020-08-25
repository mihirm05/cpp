#ifndef PEOPLE_H
#define PEOPLE_H

#include<string> 
#include "Birthday.h"

using namespace std; 

class People{
    public:
    People(string n, Birthday DOB);
    void printInfo();
    private:
    string name;
    Birthday dob;
};

#endif //PEOPLE_H