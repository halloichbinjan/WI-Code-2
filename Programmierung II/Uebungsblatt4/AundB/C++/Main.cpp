#include <iostream>
#include "A.cpp"
#include "B.cpp"
#include <stdlib.h>

using namespace std;

int main()
{
    A a1, a2(50);
    B b1, b2(100, 200);
    a1.ausgabe();
    cout << endl;
    a2.ausgabe();
    cout << endl;
    b1.ausgabe();
    cout << endl;
    b2.ausgabe();
    cout << endl;

    return EXIT_SUCCESS;
}