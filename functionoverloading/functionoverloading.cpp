#include<iostream> 
#include<string> 

using namespace std; 

class Overloading{
    public:
    void print(int x){
        cout<<"This prints integers: "<<x<<endl;
    }

    void print(float x){
        cout<<"This prints decimals: "<<x<<endl;
    }
};


int main(){
    Overloading o;
    int a = 10;
    float b = 15.0;

    o.print(a);
    o.print(b);
}