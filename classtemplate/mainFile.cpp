#include<iostream> 
#include<string> 

using namespace std; 

// defining the class template 
template <class T> 

class Tem{
    // two member variables of type T 
    T first, second;

    // constructor for setting the member variables
    public: 
    Tem(T a, T b){
        first = a;
        second = b;
    }

    // function to compare the member variables and output the larger of the two 
    T larger();
};

// implementation of larger() 
template <class T>
T Tem<T>::larger(){
    return first>second?first:second; 
}

int main(){
    // creating the object of class template
    Tem <int> t(6, 43);
    cout<<t.larger()<<endl;
}