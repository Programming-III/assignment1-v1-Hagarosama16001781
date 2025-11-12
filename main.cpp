#include"mammal.h"
#include "zoo.h"
#include"enclosure.h"
#include "animal.h"
#include"bird.h"
#include"reptile.h"
#include <iostream>
using namespace std;
animal::animal(){
    name="";
    age=0;
    ishungry=false;
}
animal::animal(string name, int age,bool ishungry){
    this->name=name;
    this->age=age;
    this->ishungry=ishungry;
}
animal::~animal(){}
string animal::setname(string n){
    name=n;
}
void animal:: getname(){
    return name;
}
int animal:: setage(int a){
    age=a;
}
void animal:: getage(){
    return age;
}
bool animal::setishungry(bool h){
    ishungry=h;
}
void animal:: getishungry(){
    return ishungry;
}
void animal:: display(){
    cout<<"animal name is"<<name<<endl;
    cout<<"animal age is"<<age<<endl;
    cout<<"animal is hungry"<<ishungry<<endl;
}
void animal:: feed(){
    if(ishungry="false"){
        cout<<"animal is not hungry"<<endl;
    }else{cout<<"animal is hungry"<<endl;
}}
mammal::mammal():animal(){
    furcolor="";
}
mammal::mammal(string name,int age,bool ishungry,string furcolor):animal( name, age, ishungry){
    this->furcolor=furcolor;
}
mammal::~mammal(){};
string mammal::setfurcolor(string f){
    furcolor=f;
}
void mammal::getfurcolor(){
    return furcolor;
}
bird::bird():aniaml(){
    wingspan=0,0;
}
bird::bird(string name,int age,bool ishungry,float wingspan):aniaml( name, age, ishungry){
    this->wingspan=wingspan;
}
bird::~bird(){}
float bird::setwingspan(float w){
    wingspan=w;
}
void bird:: getwingspan(){
    return wingspan;
}
reptile::reptile():animal(){
    isvenomous=false;
}
reptile::reptile(string name,int age,bool ishungry,bool isvenomous):animal(string name,int age,bool ishungry){
    this->isvenomous=isvenomous;
}
reptile::~reptile(){}
bool reptile::setisvenomous(bool v){
    isvenomous=v;
}
void reptile:: getisvenomous(){
    return isvenomous;
}
enclosure::enclosure(){
    animal=nullptr;
    capacity=0;
    currentcount=0;
}
enclosure::enclosure(int capacity,int currentcount){
    this->capacity=capacity;
    this->currentcount=currentcount;
}
enclosure::~enclosure(){
    delete[]aniaml;
}
void enclosure::addanimal(Animal*a){
    if(currentcount<capacity){
        animal[capacity];
        currentcount++;
        
    }
}
void enclosure::displayanimal(){
    cout<<"the name is"<<name<<endl;
    cout<<"age is "<<age<<endl;
    cout<<"cpacity"<<capacity<<endl;
    cout<<"currentcount"<<currentcount<<endl;
    
}
zoo::zoo(){
    visitorname="";
    ticketsbought=0;
}
zoo::zoo(string visitorname,int ticketsbought){
    this->visitorname=visitorname;
    this->ticketsbought=ticketsbought;
}
zoo::~zoo(){}
void zoo::displayinfo(){
    cout<<"visitorname"<<name<<endl;
    cout<<"ticketsbought"<<ticketsbought<<endl;
}
int main(){
    enclosure e1(100,50);
    mammal m1("dolphine",30,false,"red");
    bird b1("bird",40,true,3.0);
    reptile("croc",20,false,"venomous");
    e1.displayanimal();
    m1.addanimal(b1);
    zoo z1("hatem",40);
    z1.displayinfo();
}
