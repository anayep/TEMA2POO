#ifndef APARTAMENT_H
#define APARTAMENT_H
#include<iostream>
#include "room.h"
class apartament: public room {

int datea[365];
public:
    apartament();
    int getcapacitate();
apartament(const apartament& other);
    int setdate(int n,int m);
    int checkdate(int n);
    int checkfirstdate(int n,int m);
    void getdatea();
    void removedate(int n,int m);
    ~apartament();
};

#endif // APARTAMENT_H
