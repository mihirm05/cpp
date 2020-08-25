#ifndef BIRTHDAY_H
#define BIRTHDAY_H

using namespace std; 

class Birthday{
    public:
    Birthday(int d, int m, int y);
    void printDate();
    private:
    int day;
    int month;
    int year;
};

#endif //BIRTHDAY_H