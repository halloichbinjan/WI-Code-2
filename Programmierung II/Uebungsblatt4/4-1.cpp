// inherit01.cpp - Kleine Demonstration fuer Vererbung in C++ [Version 2023]

#include <iostream> // oder #include <iostream>
#include <stdlib.h>
using namespace std;

// -- Deklaration Klasse A
class A
{
protected:
    int a;

public:
    A();
    A(int);
    void ausgabe();
};

// -- Deklaration Klasse B
class B : public A
{
private:
    int b;

public:
    B();
    B(int, int = 0);
    void ausgabe();
};

// -- Implementierung Klasse A
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

// -- Implementierung Klasse B
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

} // end main

// end inherit01.cpp