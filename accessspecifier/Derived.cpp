#include<iostream> 
#include<string> 

#include "Base.h"
#include "Derived.h"

using namespace std;


void Derived::print(){
    // public variable of the base class accessible
    publicV = 1;

    // protected variable of the base class accessible 
    protectedV = 2;

    // private variable not accessible 
    // privateV = 3;
    
    cout<<"public: "<<publicV<<endl;
    cout<<"protected: "<<protectedV<<endl;
    // cout<<"private: "<<privateV<<endl;
}
