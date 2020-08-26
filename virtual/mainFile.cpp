#include<iostream> 
#include<string> 

using namespace std;

class Engine{
    // every object of the derived class will have its own implementation of function
    public:
    virtual void power(){}
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