// Example program
#include <iostream>
#include<cstdlib>
#include <string>

using namespace std;

class Random{
    public:
    int randomGenerator(){
        srand(time(0));
        int randNum = rand();
        return randNum;
    }
};

int main()
{   Random r;
    int rn = r.randomGenerator();
    cout<<"Random number is: "<<rn<<endl;
}

