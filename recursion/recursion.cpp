#include<iostream>
#include<string> 

using namespace std; 

class Recursion{
    public:
    // compute the factorial of a number using the concept of recursion 
    int factorial(int x){
        // ending point for the recursion
        if(x==1){
            return 1;
        }
        else{
            return x*factorial(x-1);
        }
    }
};

int main(){
    // creating object of the Recursion class 
    Recursion r;
    int val;
    cout<<"Enter a number: "<<endl;
    cin>>val;
    int factVal = r.factorial(val);
    cout<<"Factorial of the number is: "<<factVal<<endl;
}