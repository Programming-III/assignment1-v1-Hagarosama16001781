#ifndef MAMMAL_H
#define MAMMAL_H
#include "animal.h"
#include<iostream>
using namespace std ;
class mammal:public animal{
    private:
    string furcolor;
    public:
    mammal();
    mammal(string name,int age,bool ishungry,string furcolor);
    ~mammal();
    string setfurcolor(string f);
    void getfurcolor();
    
};
#endif
