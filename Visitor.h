#ifndef ZOO_H
#define ZOO_H
#include<iostream>
using namespace std;
class zoo{
    private:
    string visitorname;
    int ticketsbought;
    public:
    zoo();
    zoo(string visitorname,int ticketsbought);
    ~zoo();
    void displayinfo();
    
};
#endif
