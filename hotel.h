#ifndef HOTEL_H
#define HOTEL_H
#include<iostream>
#include<vector>
#include "client.h"
#include "persoana.h"
#include "room.h"
#include "camera.h"
#include "apartament.h"

using namespace std;

class hotel {

static int date[];
vector <client> g;
vector <camera> ch;
vector <apartament> a;
static int salaindiv;

public:

    hotel();

    hotel (const hotel& oth);

    void menu();

    void rezervare();

    void anularerezervare();

    void searchnume();

int checkroomdate(int p);
 int checkroom(int m,int n);

 int checksala(int n);

 ~hotel();

};


#endif // HOTEL_H
