#include<iostream> 
#include<string> 
#include<fstream> 

using namespace std; 

int main(){
    ifstream f("population.txt");

    int id;
    string countryName;
    int population;

    // when the file pointer reaches the end, program exits the loop
    while(f>>id>>countryName>>population){
        cout<<id<<", "<<countryName<<", "<<population<<endl;
    }
    // once the file object is deleted, the stream closes automatically (no need to write .close())
    
}