#ifndef BIRD_H
#define BIRD_H
#include"animal.h"
#include<iostream>
using namespace std;
class bird:public animal{
    private:
    float wingspan;
    public:
    bird();
    bird(string name,int age,bool ishungry,float wingspan);
    ~bird();
    float setwingspan(float w);
    void getwingspan();
    
};
#endif
