#include "A.h"
#include <iostream>

using namespace std;

A::A()
{
    a = 0;
}

A::A(int a)
{
    this->a = a > 0 ? a : 0;
}

void A::ausgabe()
{
    cout << "a: " << a;
}