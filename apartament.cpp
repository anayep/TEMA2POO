#include<iostream>
#include "apartament.h"
#include "room.h"
using namespace std;


    apartament::apartament():datea{0}{
    }
 apartament::apartament(const apartament& other){

for(int i=0;i<365;i++)
    datea[i]=other.datea[i];
 }

 void apartament::getdatea(){
 int i;
 for(i=0;i<30;i++)
    cout<<datea[i]<<" ";
    cout<<endl;
 }

     int apartament::setdate(int n,int k){

 int i;
 for(i=n;i<n+k;i++)
    datea[i]=1;
 }

 int apartament::checkfirstdate(int n,int p){
 int i,j;
 int k=0;
 for(int i=n;i<n+p;i++)
    if(datea[i]==1) return 0;

return 1;
 }

 void apartament::removedate(int n,int m)
 {
     for(int i=n;i<m;i++)
        datea[i]=0;
 }
apartament::~apartament(){

}
