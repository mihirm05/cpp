#include<iostream>
#include<string> 
#include<cmath>

using namespace std;

class Loop{
    public:
    void loop(float p, float r, float total){
        
        for(int day=1; day<=20; day++){
            total = p * pow(1+r, day);
            cout<<day<<"------"<<total<<endl;
            }
        }
};

int main(){
    Loop l;

    float total;
    float basic;
    float rate;

    cout<<"Enter the basic amount: "<<endl;
    cin>>basic;

    cout<<"Enter the rate: "<<endl;
    cin>>rate;

    l.loop(basic, rate, total);
}