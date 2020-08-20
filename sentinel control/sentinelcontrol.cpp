#include<iostream>
#include<string> 

using namespace std;

class Sentinel{
    // useful in those cases in which the number of iterations are not beforehand 
    public:
    int ageCalculator(){
        int age;
        int ageTotal;
        int numberOfPeople;

        cout<<"Enter first person's age or -1 to quit"<<endl;
        cin>>age;

        while(age != -1){
            ageTotal = ageTotal + age;
            numberOfPeople++;

            cout<<"Enter next person's age or -1 to quit"<<endl;
            cin>>age;
            
        }
        
        cout<<"Number of people entered: "<<numberOfPeople<<endl;
        cout<<"Average age: "<<float(ageTotal)/float(numberOfPeople)<<endl;
        }
};

int main(){
    Sentinel s;
    s.ageCalculator();
    return 0;
}