#include<iostream>
#include<string> 

using namespace std; 

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch(age){
        case 16:
            cout<<"Eligible to drive"<<endl;
            break;
        case 18:
            cout<<"Eligible to vote"<<endl;
            break;
        default:
            cout<<"Sorry!"<<endl;
    }
}