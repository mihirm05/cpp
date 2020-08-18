#include<iostream> 
#include<string> 

using namespace std;

class Comparator{
    private:
    float valOne;
    float valTwo;

    public:
    string comparator(float val1, float val2){
        if(val1>val2){
            cout<<val1<<" is greater than "<<val2<<endl;
        }
        else if(val1 == val2){
            cout<<val1<<" is equal to "<<val2<<endl;
        }
        else{
            cout<<val1<<" is smaller than "<<val2<<endl;
        }
    }
};


int main(){
    Comparator c;
    float valOne;
    cout<<"Enter first number: "<<endl;
    cin>>valOne;
    float valTwo;
    cout<<"Enter second number: "<<endl;
    cin>>valTwo;
    c.comparator(valOne, valTwo);

    return 0;
}