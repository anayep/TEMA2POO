#include <iostream>
#include <exception>
#include "myexception1.h"

using namespace std;
const char* myexception1::what() {
return " Ati introdus un caracter invalid";
        }
myexception1::myexception1(){

}

