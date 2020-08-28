#include<iostream> 
#include<string> 
#include<fstream> 

using namespace std; 

int main(){ 
    ofstream f("population.txt");

    cout<<"Enter index, country name, and population"<<endl; 
    cout<<"Hit Ctrl+Z to quit"<<endl;

    int index; 
    string countryName; 
    int population; 

    while(cin>>index>>countryName>>population){
        f<<index<<" "<<countryName<<" "<<population<<endl;
    }
}