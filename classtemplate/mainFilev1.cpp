#include<iostream> 
#include<string> 

using namespace std; 

// defining the class template 
template <class T> 

class Tem{
    //defining the constructor
    public:
    Tem(T x){
        cout<<x<<" is not a character"<<endl;
    }
};

// this line tells the compiler that template specialization is used
template <>

// majority of the class composition would be same except for a 
// a few minor changes 
// <char> tells the compuler, treat the char input data differently 
class Tem<char>{
    // specialization of the template allows it to handle 
    // char type differently than other data types 
    public:
    Tem(char x){
        cout<<x<<" is a charcter"<<endl;
    }
};

int main(){
    Tem<int> o1(4);
    Tem<double> o2(4.5);
    Tem<char> o3('q');
}
