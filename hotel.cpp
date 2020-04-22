#include<iostream>
#include <vector>
#include "hotel.h"
#include "client.h"
#include "persoana.h"
#include "room.h"
#include "camera.h"
#include "apartament.h"
#include "myexception1.h"
#include "myexception2.h"
using namespace std;

hotel::hotel(){}

    hotel::hotel (const hotel& oth){
        unsigned int i;
    for(i=0;i<oth.g.size();i++)
        g.push_back(oth.g[i]);

        for(i=0;i<oth.ch.size();i++)
            ch.push_back(oth.ch[i]);

        for(i=0;i<oth.a.size();i++)
            a.push_back(oth.a[i]);
    }



    void hotel::rezervare()
    {
    int n,nrcam,ok,s,sala,nn;
    string c;
    nn=1;
    cout<<"\n\n" <<" INTRODUCETI NUMARUL DE GRUPURI PENTRU REZERVARE : ";
    cin>>n;
    cout<<"\n\n";

    for(int i=0;i<n;i++)
    {
        client g1;
        cin>>g1;

        s=g1.getnrpersoana();
        cout<<"\n"<<" Ce tip de camera doriti? Introduceti C pentru camera mica sau A pentru apartament : ";
        cin>>c;

        if(c=="C" or c=="c"){
        int nrp;
        if(s%2==0) nrcam=s/2;
        else nrcam=s/2+1;
        g1.setroomtype("c");
        if(ch.size()+nrcam<=3){
            for(int i=0;i<nrcam;i++){
            camera c1;
            c1.setdate(0,g1.getperioada());
            ch.push_back(c1);
            //g1.setpersroom(i,nrcam);
             g1.addroom(c1);
             g1.setpersroom(i,nn);
             cout<<" I ESTEEE "<<i<<endl;
             g1.setpersroom(i+1,nn);

             g1.setcheckin(0);
             g1.addnrcamera(nn);
             nn++;
             g1.addroomid(i);
            }
        }

        else {
            int k=0;
            int kk=0;
            int ii;
            int p=checkroom(nrcam,g1.getperioada());

                for(ii=0;ii<ch.size()&&kk<nrcam;ii++)
            { if(ch[ii].checkfirstdate(p,g1.getperioada())==1)
            {
            ch[ii].setdate(p,g1.getperioada());
            g1.addroom(ch[ii]);
            g1.setpersroom(k,ii);
            g1.setpersroom(k+1,ii);
            g1.addnrcamera(ii);
            g1.addroomid(ii);
            k=k+2;
            kk++;
            }

            }
            g1.setcheckin(p);

        }
            }

        else if(c=="A" or c=="a"){
        int nrp;
        if(s%4==0) nrcam=s/4;
        else nrcam=s/4+1;
        g1.setroomtype("a");
        if(a.size()+nrcam<=2){
            for(int i=0;i<nrcam;i++){
            apartament a1;
            a1.setdate(0,g1.getperioada());
            a.push_back(a1);

             g1.addroom(a1);
             g1.setpersroom(i,nn);

             g1.setpersroom(i+1,nn);

             g1.setcheckin(0);
             g1.addnrcamera(nn);
             nn++;
             g1.addroomid(i);
            }
        }

        else {
            int k=0;
            int kk=0;
            int ii;
            int p=checkroom(nrcam,g1.getperioada());

                for(ii=0;ii<a.size()&&kk<nrcam;ii++)
            { if(a[ii].checkfirstdate(p,g1.getperioada())==1)
            {
            a[ii].setdate(p,g1.getperioada());
            g1.addroom(a[ii]);
            g1.setpersroom(k,ii);
            g1.setpersroom(k+1,ii);
            g1.addnrcamera(ii);
            g1.addroomid(ii);
            k=k+2;
            kk++;
            }

            }
            g1.setcheckin(p);

        }
            }

        else {
        cout<<"Eroare. Introduceti din nou : ";
        cin>>c;}




    for(int j=0;j<ch.size();j++)
        ch[j].getdatec();

    g.push_back(g1);

    cout<<g1<<endl;
    }
    }

    void hotel::anularerezervare(){
    int n,ci,co;
    cout<<"INTRODU NR REZERVARII PE CARE VREI SA O ANULEZI "<<endl;
    cin>>n;
    ci=0;
    co=0;

    //STERGEM PERIOADA DE CAZARE
    ci=g[n-1].getcheckin();
    co=ci+g[n-1].getperioada();
if(g[n-1].getroomtype()=="c"){
    for(int i=0;i<g[n-1].getidsize();i++)
    {
        ch[g[n-1].getroomid(i)].removedate(ci,co);
    }}

    else {
        for(int i=0;i<g[n-1].getidsize();i++)
    {
        a[g[n-1].getroomid(i)].removedate(ci,co);
    }


    }


    //STERGEM AL N LEA CLIENT DIN VECTORUL DE CLIENTI
    g.erase(g.begin()+n-1);

    unsigned int i;


    cout<<"\n"<<"**** Ati modificat clientii ****"<<"\n";
        for(i=0;i<g.size();i++)
            cout<<g[i]<<" "<<endl;

    }




 int hotel::checkroom(int n,int p)
 {
     unsigned int i,j;
     j=0;
     while(j<365){
     int k=0;
     for(i=0;i<ch.size();i++)
        if(ch[i].checkfirstdate(j,p)) k++;

    if(k>=n)
    return j;
    else j++;}

   return 0;
 }

 void hotel::searchnume(){
 string c;
 unsigned int i;
 cout<<"CAUTATI NUMELE : "<<endl;
 cin>>c;
int ok=1;
 for(i=0;i<g.size();i++)
    for(int j=0;j<g[i].getnrpersoana();j++)
        if(g[i].getnamepersoana(j)==c) { ok=0; g[i].getpers(j);}
if(ok==1) cout<<"NU AVEM NICI UN CLIENT CU ACEST NUME " ;

 }


 hotel::~hotel() {
     g.clear();
 }
