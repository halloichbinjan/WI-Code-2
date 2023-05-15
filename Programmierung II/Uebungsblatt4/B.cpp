#include "B.h"
#include <iostream>

using namespace std;

B::B()
{
    b = 0;
}

B::B(int a, int b)
{
    this->a = a;
    this->b = b > 0 ? b : 0;
}

void B::ausgabe()
{
    A::ausgabe();
    cout << "  b: " << b;
}