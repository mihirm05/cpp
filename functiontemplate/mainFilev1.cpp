#include<iostream> 
#include<string> 

using namespace std; 

// creates a generic type "gen" which yields return value the same as the input value
template <class FIRST, class SECOND>

// setting function type to "auto" results in the 
// output to be as per the mathematical processing, 
// with the current code, user has to set the return type 
// manually. 

FIRST smaller(FIRST a, SECOND b){
      return (a<b?a:b);
}


int main(){
    double num1 = 7.65;
    int num2  = 43; 

    double out = smaller(num1, num2);
    cout<<"smaller number is: "<<out<<endl;
}


