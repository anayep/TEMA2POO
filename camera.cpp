#include<iostream>
#include "camera.h"
#include "room.h"
using namespace std;
    camera::camera(int n):room(n){}
    camera::camera():datec{0}{
    }
 camera::camera(const camera& other){

for(int i=0;i<365;i++)
    datec[i]=other.datec[i];
 }

 void camera::getdatec(){
 int i;
 for(i=0;i<30;i++)
    cout<<datec[i]<<" ";
    cout<<endl;
 }

     int camera::setdate(int n,int k){

     cout<<"n esteee "<<n<<"\n  k esteeee  "<<k<<endl;
 int i;
 for(i=n;i<n+k;i++)
    datec[i]=1;


for(i=0;i<30;i++)
    cout<<datec[i]<<" ";
cout<<endl;
 }

 int camera::checkfirstdate(int n,int p){
 int i,j;
 int k=0;
 for(int i=n;i<n+p;i++)
    if(datec[i]==1) return 0;

return 1;
 }

 void camera::removedate(int n,int m)
 {
     for(int i=n;i<m;i++)
        datec[i]=0;
 }
camera::~camera(){

}
