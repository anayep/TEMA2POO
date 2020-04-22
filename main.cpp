#include <iostream>
#include <vector>
#include <exception>
#include "hotel.h"
#include "client.h"
#include "myexception1.h"
#include "myexception2.h"
#include "camera.h"
using namespace std;

int hotel::date[365]={0};
int client::restaurant=0;
int hotel::salaindiv=0;
int main()
{
hotel h;
try{
h.rezervare();
}catch (myexception1 e){
cout<<e.what()<<endl;
}

h.anularerezervare();
h.rezervare();
h.searchnume();


return 0;
}
