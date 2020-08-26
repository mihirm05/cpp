#include<iostream> 
#include<string> 

using namespace std;

// in this version of the file, power() is a "pure" virtual function having no
// implementation in the base class whatsoever. 2 derived class implement power() as per their needs.


class Engine{
    // every object of the derived class will have its own implementation of function
    public:
    virtual void power() = 0;
};

class Car: public Engine{
    public:
    void power(){
        cout<<"This is car"<<endl;
    }
    
};

class Truck: public Engine{ 
    public:
    void power(){
        cout<<"This is truck"<<endl;
    }
    
};

int main(){
    Car c;
    Truck t; 

    Engine *e1 = &c;
    Engine *e2 = &t;

    // calling the member of derived class from the base class object
    // enemy objects are being used to call same function with different processing (idea behind polymorphism)
    e1->power();
    e2->power();

    // c.power();
    // t.power();
}