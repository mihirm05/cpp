#ifndef PRINT_H
#define PRINT_H

using namespace std;

class Print{
    // constructor prototype
    public:
    Print(int a, int b);
    void process();

    // a regular and a constant variable (both private)
    private:
    int regVar;
    const int constVar;

};

#endif // PRINT_H