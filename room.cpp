
#include<iostream>

#include "room.h"


using namespace std;



room::room(int nr) {
roomnr=nr;
}

room::room(){
roomnr=0;
}

room& room::operator =(const room &other){
roomnr=other.roomnr;
}

void room::setroomnr(int nn) {
roomnr=nn;
}
int room::getroomnr ()
{
    return roomnr;
}


