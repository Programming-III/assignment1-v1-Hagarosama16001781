#ifndef REPTILE_H
#define REPTILE_H
#include"animal.h"
#include<iostream>
using namespace std;
class reptile:public animal{
    private:
    bool isvenomous;
    public:
    reptile();
    reptile(string name,int age,bool ishungry,bool isvenomous);
    ~reptile();
    bool setisvenomous(bool v);
    void getisvenomous();
};
#endif
