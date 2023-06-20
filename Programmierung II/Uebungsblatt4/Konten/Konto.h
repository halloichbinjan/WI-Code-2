#ifndef KONTO_H
#define KONTO_H
#include "../../Uebungsblatt1/Person.cpp"

class Konto
{
private:
    Person *Inhaber;
    int kontonr;
    float kontostand;

public:
    Konto(Person *Inhaber, int kontonr, float kontostand);
};

#endif