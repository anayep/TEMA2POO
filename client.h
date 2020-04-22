#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
#include<vector>
#include "persoana.h"
#include "room.h"
#include "camera.h"
#include "apartament.h"

class client {

vector <persoana> pers;
vector <room> r;
int n;
int checkin;
int perioada;
static int restaurant;
string roomtype;
int sala;
vector <int> id;
vector <int> nrcamera;
public:

client();

client (const client& oth);

void setcheckin(int n);

void setroomtype(string n);

string getroomtype();

int getroomid(int i);

int getidsize();

void setperioada(int p);


int getcheckin();


persoana& operator[](const int poz);



int getrooms(int n);

 int getperioada () ;

 int getnrpersoana();

 int getnrroom();

void getpers(int i);

 void setpersroom(int n,int m);

 void addroom(room r1);

 string getnamepersoana(int n);

 int getrn(int n);

 void afisroomarray ();

 int getrestaurant();

 void setsala(int i);

 int getsala();
 void addroomid(int n);
 void addnrcamera(int n);

~client ();


friend istream& operator>>(istream& in, client& g2);
friend ostream& operator<<(ostream& out, client& g2);

};

#endif // CLIENT_H
