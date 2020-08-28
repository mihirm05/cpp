#include<iostream>
#include<fstream>  // enables reading and writing to files 

using namespace std; 

int main(){ 
    // METHOD 1 to create file object // 
    // creating a file object to deal with files 
    ofstream fo; 

    // opens "test.txt", if no "test.txt" exists then creates it and opens it 
    fo.open("test.txt");

    fo<<"This will be written in the file\n";
    cout<<"This will be written on the console"<<endl;

    // close the file object 
    fo.close();


    // METHOD 2 to create file object // 
    // instead of writing two lines, pass the name of the file in the constructor 
    // in order to start working with the file
    ofstream fo1("test1.txt");

    // check if the file is open or not 
    if(fo1.is_open()){
        cout<<"The file is open"<<endl;
    }
    // "else" block will run when the file object is not associated with any file
    // for example: no file name was passed into the constructor 
    else{
        cout<<"The file is not open"<<endl;
    }

    fo1<<"This will be written in the second file"<<endl;
    fo1.close();
}