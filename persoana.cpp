
#include<iostream>
#include <vector>
#include "persoana.h"

using namespace std;


persoana::persoana() {}

persoana::persoana (const persoana& o)
{ name=o.name;
 room_nr=o.room_nr;
 tipmicdejun=o.tipmicdejun;
}


void persoana::setroom_nr (int r)
{
   room_nr=r;
}

int persoana::getroom_nr()
{
    return room_nr;
}

void persoana::setname(string nm) {
name=nm;
}

string persoana::getname() {

return name;

}

void persoana::settipmicdejun(string s){

tipmicdejun=s;

}

string persoana::gettipmicdejun(){

return tipmicdejun;

}

persoana& persoana::operator =(const persoana &other){
name=other.name;
room_nr=other.room_nr;
tipmicdejun=other.tipmicdejun;
}

persoana::~persoana() {}


ostream& operator<<(ostream& out, persoana& p )
{

    cout<<"NUME : "<<p.name<<endl;
    cout<<"CAMERA IN CARE ESTE CAZAT : "<<p.room_nr<<endl;
    cout<<"TIP MIC DEJUN : "<<p.tipmicdejun;

    return out;

}

