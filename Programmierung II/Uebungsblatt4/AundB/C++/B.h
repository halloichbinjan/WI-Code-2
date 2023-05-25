#ifndef B_H
#define B_H

#include "A.h"

class B : public A
{
private:
    int b;

public:
    B();
    B(int, int = 0);
    void ausgabe();
};

#endif