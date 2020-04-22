#ifndef ROOM_H
#define ROOM_H


class room {
int roomnr;

public:

room(int nr);

room();

room& operator =(const room &other);

void setroomnr(int nn);
int getroomnr ();
//int setdate();

};

#endif // ROOM_H
