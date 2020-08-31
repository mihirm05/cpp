#include<iostream> 
#include<string>

using namespace std; 

int main(){
    string s1("test string 1");
    string s2;
    string s3; 
    string s4 = "test string 2";

    // methods to copy strings
    s2 = s1;
    s3.assign(s4);

    cout<<s1<<"\n"<<s2<<"\n \n"<<s3<<"\n"<<s4<<"\n"<<endl; 

    // accessing strings as arrays
    cout<<"third element of input string is: "<<s1[2]<<endl;
    cout<<"third element of input string is: "<<s1.at(2)<<"\n"<<endl;

    // length of string 
    cout<<"length of the input string is: "<<s1.length()<<"\n"<<endl;

    // substring (slicing strings)
    // -ve values: goes on till the last index of the string 
    cout<<s1.substr(0, -1)<<endl;
    cout<<s1.substr(0, -3)<<endl;

    // substr: (start point, # characters to be considered) 
    cout<<s1.substr(0, 6)<<"\n"<<endl;

    // swapping
    s1.swap(s3);
    cout<<s1<<" "<<s3<<"\n"<<endl;

    // erase string (point from where to erase)
    cout<<s1<<endl;
    cout<<s1.erase(5)<<endl;

    // replace: start, # characters to replace, replace with 
    cout<<s3.replace(0, 4, "real")<<endl;
}
