#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
#include "room.h"


class camera: public room {
    public:
int datec[365];

public:
    camera(int n);
    camera();
    int getcapacitate();
camera(const camera& other);
    int setdate(int n,int m);
    int checkdate(int n);
    int checkfirstdate(int n,int m);
    void getdatec();
    void removedate(int n,int m);
    ~camera();
};

#endif // CAMERA_H
