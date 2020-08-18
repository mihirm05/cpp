#include<iostream> 
#include<string>

using namespace std; 

class TestClass{
    public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    
    private:
    string name;
};

int main()
{
    TestClass t;
    string userInput;
    cout<<"Enter a string! \n";
    cin>>userInput;
    t.setName(userInput);
    cout<<t.getName()<<endl;
    return 0;
}