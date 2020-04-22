
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

/* int room::setdate(int n){

 int ok2,ok,i,k,j;
 ok=1;
 ok2=1;
 k=0;
 while(ok2==1){
    ok=1;

    while(date[k]!=0)
        k++;

    ok=0;
    for(i=k;i<k+n;i++)
        if(date[i]==1) { ok=1; break;}

    if(ok==1) k=k+n;
    if(ok==0){
        for(j=k;j<k+n;j++)
            date[j]=1;
        ok2=0;
    }
 }}
*/
