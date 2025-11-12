#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include"animal.h"
#include<iostream>
using namespace std;
class enclosure{
    private:
    animal*a;
    int capacity;
    int currentcount;
    public:
    enclosure();
    enclosure(int capacity, int currentcount);
    ~enclosure();
    void addaniaml(animal*a);
    void displayanimal();
    
};
#endif
