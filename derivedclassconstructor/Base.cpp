#include<iostream> 
#include<string>

#include "Base.h"
#include "Derived.h"

using namespace std;

Base::Base(){ 
    cout<<"This is base class constructor"<<endl;
}

Base::~Base(){
    cout<<"This is base class destructor"<<endl;
}