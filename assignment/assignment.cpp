#include<iostream>
#include<string> 

using namespace std; 

class Increment{
    private:
    int value;

    public:
    void setValue(int x){
        value = x;
    }

    int getValue(string op){
        if(op=="+"){
            return value+1;
    }
        else if(op=="-"){
            return value-1;
        }
        else if(op=="*"){
            return value*1;
        }
        else{
            return value/1;
        }
}
};

int main(){
    // creating object for Increment class
    Increment i;
    int val;
    string op;

    // accepting user input for testing 
    cout<<"Enter a value"<<endl;
    cin>>val;
    cout<<"value before operation: "<<val<<endl;

    // accepting user input for operation 
    cout<<"Select an operation: + - * /"<<endl;
    cin>>op;
    cout<<"operation selected: "<<op<<endl;  

    // setting the class private variable using the object of the class 
    i.setValue(val);

    // getting the value of variable after operating the desired process
    cout<<"value after operation: "<<i.getValue(op)<<endl;
}
