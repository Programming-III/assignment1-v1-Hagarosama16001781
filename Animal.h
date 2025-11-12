#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class animal{
    private:
    string name;
    int age;
    bool ishungry;
    public:
    animal();
    animal(string name, int age,bool ishungry);
    ~animal();
    string setname(string n);
    void getname();
    int setage(int i );
    void getage();
    bool setishungry(bool h);
    void getishungry();
    void display();
    void feed();
    
};
#endif
