#include<iostream> 
#include<string> 

using namespace std;

class Loop{
    public:
    void loop(int count, string sentence){
        int iterator = 1;
        while(iterator <= count){
            cout<<sentence<<" count # "<<iterator<<endl;
            iterator += 1;
        }
    }

    void accumulator(int count){
        int number;
        int counter = 0;
        int total = 0;
        while(counter< count){
            cout<<"Enter a number: ";
            cin>>number;
            total = total + number;
            counter++;
        }
    cout<<"The total for "<<count<<" numbers is "<<total<<endl;
    }

};

int main(){
    // creating the object
    Loop l;
    
    // basic while loop to print a sentence n number of times
    // int number;
    // string sentence;

    // cout<<"Enter the sentence: ";
    // using regular cin>> here causes the input stream
    // object to miss the blank spaces in between the words 
    // getline(cin, sentence);
    // cout<<"Enter the count of prints: ";
    // cin>>number;

    // l.loop(number, sentence);

    int count;
    cout<<"Enter the number of numbers to be added: ";
    cin>>count;
    l.accumulator(count);
    return 0;
}