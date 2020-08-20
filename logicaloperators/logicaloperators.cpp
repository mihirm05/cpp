#include<iostream>
#include<string> 

using namespace std; 

class Decision{
    public:
    void decide(int age, int money){
        if(age>21 && money>500){
            cout<<"You are eligbile"<<endl;
        }
        else if(age>21 && money<500){
            cout<<"Sorry insufficient funds"<<endl;
        }
        else if(age<21 && money>500){
            cout<<"Sorry you are underage"<<endl;
        }
        else{
            cout<<"Neither criteria match"<<endl;
        }
    }
};

int main(){
    Decision d;
    int age; 
    int money; 

    cout<<"Enter age"<<endl;
    cin>>age;

    cout<<"Enter money"<<endl;
    cin>>money;

    d.decide(age, money);
}