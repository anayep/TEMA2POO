
#include<iostream>
#include <vector>
#include "client.h"
#include "persoana.h"
#include "room.h"
#include "camera.h"
#include "apartament.h"
#include "hotel.h"
#include "myexception2.h"
using namespace std;

client::client(){

    checkin=0;
    perioada=0;
    n=0;
}

client::client (const client& oth)
{
    unsigned int i;
    for(i=0;i<oth.pers.size();i++)
        pers.push_back(oth.pers[i]);

    for(i=0;i<oth.r.size();i++)
        r.push_back(oth.r[i]);

        n=oth.n;
        perioada=oth.perioada;
        checkin=oth.checkin;
}

void client::setcheckin(int n){
checkin=n;
}


void client::setperioada(int p){
perioada=p;

}


int client::getcheckin(){
return checkin;
}


 int client::getperioada () {
 return perioada;
 }

 int client::getnrpersoana(){

 return pers.size();

 }

 int client::getnrroom() {
 return r.size();
 }

 void client::setpersroom(int n,int m){
 pers[n].setroom_nr(m);
 }

 void client::addroom(room r1){
 r.push_back(r1);
 }

 string client::getnamepersoana(int n){
 return pers[n].getname();
 }

 int client::getrooms(int n){
 return r[n].getroomnr();

 }

 int client::getrestaurant(){

 return restaurant;
 }


 int client::getrn(int n)
 {
     return pers[n].getroom_nr();
 }


 void client::setsala(int n){
 sala=n;

 }


 void client::addnrcamera(int n){

 nrcamera.push_back(n);
 }


 int client::getsala(){

 return sala;
 }


 void client::addroomid(int n){

 id.push_back(n);

 }


int client::getroomid(int i){

return id[i];
}

int client::getidsize(){
return id.size();
}

void client::setroomtype(string c){
roomtype=c;
}

string client::getroomtype(){

return roomtype;
}

client::~client () {
pers.clear();
r.clear();
}


istream& operator>>(istream& in, client& g2) {
int nr;
int perioada;
string nume;
string tipmj;
string tipsala;

cout<<" CATE PERSOANE SUNT IN GRUP? ";
cin>>nr;
cout<<"\n\n";

for(int i=0;i<nr;i++)
    { cout<<"SCRIETI NUMELE PERSOANEI "<<i+1<<" : ";
        persoana p;
        cin>>nume;
        p.setname(nume);
        cout<<" SCRIETI TIP MIC DEJUN. 'S' = ROOM SERVICE , 'R' = RESTAURANT :  ";
        cin>>tipmj;
        if (tipmj=="R" or tipmj=="r"){

            if(g2.getrestaurant()<30) {
                    g2.restaurant++;
            p.settipmicdejun(tipmj);}

            else
                {cout<<"RESTAURANTUL ESTE FULL. VETI PRIMI ROOM SERVICE . "<<endl;
                p.settipmicdejun(tipmj);}

        }

        if(tipmj=="S" or tipmj=="s") p.settipmicdejun(tipmj);

        g2.pers.push_back(p);

    }
    cout<<"SCRIETI CE TIP DE SALA INCHIRIATI: 1-SALA INDIVIDUALA \n 2-SALA CU SCENA \n 3-FARA SALA ";
    cin>>tipsala;
    g2.setsala(tipsala);
    cout<<"SCRIETI NUMARUL DE ZILE DE CAZARE : ";
    cin>>perioada;

    g2.setperioada(perioada);


    return in;

}

void client::getpers(int i){
 cout<<pers[i];
}

ostream& operator<<(ostream& out, client& g2 )
{
    unsigned int i;
        cout<<"\n\n"<<"****DETALII REZERVARE: *****"<<endl;
        cout<<g2.pers.size()<<" PERSOANE :"<<"\n";
        for(i=0;i<g2.pers.size();i++)
            cout<<g2.getnamepersoana(i)<<endl;
        cout<<endl;
        cout<<"CAZATE IN CAMERA/CAMERELE : ";
        for(i=0;i<g2.nrcamera.size();i++)
            cout<<g2.nrcamera[i]<<"   ";

            cout<<endl;

        cout<<"PENTRU "<<g2.getperioada()<<" ZILE."<<endl;


return out;
}


