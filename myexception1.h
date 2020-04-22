#ifndef MYEXCEPTION1_H
#define MYEXCEPTION1_H
#include <iostream>
#include <exception>
using namespace std;
class myexception1 : public exception
{
    int n;
    public:

        myexception1();
        const char* what();


};

#endif // MYEXCEPTION1_H
