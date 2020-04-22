#ifndef PERSOANA_H
#define PERSOANA_H
#include<iostream>

using namespace std;

class persoana {

string name;
int room_nr;
string tipmicdejun;
public:

persoana();

persoana (const persoana& o);


void setroom_nr (int r);

int getroom_nr();

void setname(string nm);

string getname();

void settipmicdejun(string s);

string gettipmicdejun();

persoana& operator =(const persoana &other);


~persoana();

friend ostream& operator<<(ostream& out, persoana& p);

};



#endif // PERSOANA_H
