#include<iostream> 
#include<string> 

using namespace std; 

class Pointers{
    public:
    // takes input as the variable and the new desired value
    void passByValue(int x, int val){
        x = val;
    }

    // takes input as the address to the variable and the new desired value
    void passByReference(int *x, int val){
        cout<<"address: "<<x<<endl;
        cout<<"value at address: "<<*x<<endl;
        *x = val;
    }
};

int main(){
    int a = 5;
    int b = 5;
    int val;

    // value of integers before operation
    cout<<"Original a: "<<a<<endl;
    cout<<"Original b: "<<b<<endl;

    // creating object of Pointer
    Pointers p;

    // intake of new desired value of variables
    cout<<"Enter new value : "<<endl;
    cin>>val;
 
    // calling functions 
    p.passByValue(a, val);
    cout<<"address: "<<&b<<endl;
    p.passByReference(&b, val);

    // value of integers after operation
    cout<<"Updated a (passByValue): "<<a<<endl;
    cout<<"Updated b (passByReference): "<<b<<endl;
}