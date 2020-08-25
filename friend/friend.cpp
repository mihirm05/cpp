#include<iostream> 
#include<string> 

using namespace std; 

class Friend{
    public:
    Friend(){
        friendVar = 0;
    }
    private:
    int friendVar;

    // prototyping the friend function inside the class
    // pass by reference or pass by value both can be used (here pass by value is used)
    friend void friendFunc(Friend f);
};

void friendFunc(Friend f){
    // eventhough this function is defined outside Friend, it can access the private variables as it is a "friend"
    cout<<"Original value: "<<f.friendVar<<endl;
    f.friendVar = 9;
    cout<<"Updated value: "<<f.friendVar<<endl;
}

int main(){
    Friend f;
    friendFunc(f);
}