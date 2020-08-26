#include<iostream> 
#include<string>

#include "Base.h"
#include "Derived.h"

using namespace std;

Derived::Derived(){ 
    cout<<"This is derived class constructor"<<endl;
}

Derived::~Derived(){
    cout<<"This is derived class destructor"<<endl;
}