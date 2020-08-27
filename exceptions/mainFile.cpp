#include<iostream> 
#include<string> 

using namespace std; 

int main(){
    try{
        int a; 
        cout<<"Enter a number: "<<endl;
        cin>>a;
        int b;
        cout<<"Enter another number: "<<endl;
        cin>>b;

        if(b==0){
            throw 0;
        }
        cout<<a/b<<endl;
    }
    // default catch block 
    catch(...){
        cout<<"divide by zero error"<<endl;
    }
}