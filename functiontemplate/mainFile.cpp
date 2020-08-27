#include<iostream> 
#include<string> 

using namespace std; 

// creates a generic type "gen" which yields return value the same as the input value
template <class gen> 

gen addNums(gen a, gen b){
    cout<<"summation is: "<<a+b<<endl;
    return a+b;
}

int main(){
    double num1 = 7.65;
    double num2  = 43.3;
    double out1 = addNums(num1, num2);

    int num3 = 45;
    int num4 = 55;
    int out2 = addNums(num3, num4); 
}