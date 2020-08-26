#ifndef OVERLOAD_H
#define OVERLOAD_H


class Overload{
    public:
    int num;
    Overload();
    Overload(int n);

    // this function "operator+" has a return type of "Overload"
    // this function accepts objects of type "Overload"
    Overload operator+(Overload obj1);
};

#endif //OVERLOAD_H 