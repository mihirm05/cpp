#include<iostream> 
#include<string> 
#include "Print.h"

using namespace std; 

int main(){
    int rV;
    cout<<"Enter the value for regVar: "<<endl;
    cin>>rV;

    int cV;
    cout<<"Enter the value for constVar: "<<endl;
    cin>>cV;

    // creating object for print class 
    Print p(rV, cV);  
    p.process(); 
}